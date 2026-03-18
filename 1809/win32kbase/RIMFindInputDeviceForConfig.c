/*
 * XREFs of RIMFindInputDeviceForConfig @ 0x1C011ADBC
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMDoOnPowerNotification @ 0x1C00A4674 (RIMDoOnPowerNotification.c)
 *     RIMAllocateHidConfigDesc @ 0x1C011A4F0 (RIMAllocateHidConfigDesc.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C011B30C (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindInputDeviceForConfig(int a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  int v11; // ecx
  __int64 v12; // rdx

  v6 = 0;
  *a4 = 0;
  v8 = *(_QWORD *)(a2 + 424);
  *a5 = 0;
  while ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0x400) == 0 && (*(_DWORD *)(v8 + 200) & 0x80u) != 0 )
    {
      v11 = *(_DWORD *)(*(_QWORD *)(v8 + 480) + 24LL);
      if ( (unsigned int)(v11 - 1) <= 3 || v11 == 7 )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a3,
                             v8,
                             a1,
                             *(unsigned __int16 *)(*(_QWORD *)(v8 + 464) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v8 + 464) + 112LL)) )
        {
          v12 = *(_QWORD *)(v8 + 480);
          v6 = 1;
          *a4 = -__CFSHR__(*(_DWORD *)(v12 + 308), 15);
          if ( a6 )
            *a6 = v8;
          if ( (*(_DWORD *)(v8 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
            *a5 = 1;
          return v6;
        }
      }
    }
    v8 = *(_QWORD *)(v8 + 40);
  }
  return v6;
}
