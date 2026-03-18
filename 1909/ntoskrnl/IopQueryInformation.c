/*
 * XREFs of IopQueryInformation @ 0x1406B70F0
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     FsRtlGetSupportedFeatures @ 0x14013D090 (FsRtlGetSupportedFeatures.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     FsRtlQueryOpen @ 0x14084E03C (FsRtlQueryOpen.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

__int64 __fastcall IopQueryInformation(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  _BYTE *v8; // rsi
  unsigned int v9; // r14d
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoQueryOpen)(_QWORD, _QWORD, _QWORD); // r12
  void *v12; // r13
  __int64 result; // rax
  int Open; // eax
  int v15; // [rsp+60h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 208) )
  {
    v8 = a5;
    *a5 = 0;
    v9 = 0;
    FastIoDispatch = a2->DriverObject->FastIoDispatch;
    if ( FastIoDispatch )
    {
      if ( FastIoDispatch->SizeOfFastIoDispatch > 0xC0 )
      {
        FastIoQueryOpen = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryOpen;
        if ( FastIoQueryOpen )
        {
          --*(_BYTE *)(a3 + 67);
          *(_QWORD *)(a3 + 184) -= 72LL;
          *(_QWORD *)(a4 + 40) = a2;
          if ( (MmVerifierData & 0x10) != 0 )
            v12 = (void *)VfFastIoSnapState();
          else
            v12 = 0LL;
          *v8 = FastIoQueryOpen(a3, *(_QWORD *)(a1 + 104), a2);
          if ( v12 )
            VfFastIoCheckState(v12);
          *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
          if ( *v8 )
          {
            *(_DWORD *)(a1 + 32) = -1096154543;
            if ( !*(_BYTE *)(a1 + 139) )
              *(_DWORD *)(*(_QWORD *)(a1 + 96) + 32LL) = *(_DWORD *)(*(_QWORD *)(a1 + 104) + 48LL);
          }
          else
          {
            *(_QWORD *)(a3 + 184) += 72LL;
            ++*(_BYTE *)(a3 + 67);
          }
        }
      }
    }
    return v9;
  }
  result = FsRtlGetSupportedFeatures((__int64)a2, &v15);
  if ( (int)result >= 0 )
  {
    if ( (v15 & 4) == 0 )
    {
      *a5 = 0;
      return 0LL;
    }
    Open = FsRtlQueryOpen(a2, *(_DWORD *)(a1 + 200));
    v9 = Open;
    *(_QWORD *)(a1 + 168) = *(_QWORD *)(a3 + 112);
    if ( Open < 0 )
    {
      if ( Open == -1071906812 )
      {
        v9 = 0;
        *a5 = 0;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 32) = -1096154543;
      *a5 = 1;
    }
    return v9;
  }
  return result;
}
