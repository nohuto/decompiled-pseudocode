/*
 * XREFs of EtwpApplyTransientFilters @ 0x1406DCDD8
 * Callers:
 *     EtwpIsRegEntryAllowed @ 0x140658A84 (EtwpIsRegEntryAllowed.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpApplyExeFilter @ 0x1408C2E00 (EtwpApplyExeFilter.c)
 *     EtwpApplyPackageIdFilter @ 0x1408C2F7C (EtwpApplyPackageIdFilter.c)
 */

char __fastcall EtwpApplyTransientFilters(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r11
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  unsigned int v13; // edx

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 98) & 1) != 0 )
    return 1;
  v10 = 0;
  if ( !*a4 || (v4 = EtwpApplyExeFilter(a1, *a4, a3)) != 0 )
  {
    v11 = a4[1];
    if ( v11 || a4[2] )
      v4 = EtwpApplyPackageIdFilter(a1, v11, a4[2]);
    if ( v4 )
    {
      if ( a3 )
      {
        v4 = 0;
        v12 = (_DWORD *)(a2 + *(_QWORD *)a3);
        v13 = *(_DWORD *)(a3 + 8) >> 2;
        if ( v13 )
        {
          while ( *v12 != *(_DWORD *)(*(_QWORD *)(a1 + 80) + 736LL) )
          {
            ++v10;
            ++v12;
            if ( v10 >= v13 )
              return v4;
          }
          return 1;
        }
      }
    }
  }
  return v4;
}
