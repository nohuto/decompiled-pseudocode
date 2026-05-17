/*
 * XREFs of sub_180087200 @ 0x180087200
 * Callers:
 *     sub_18006CF40 @ 0x18006CF40 (sub_18006CF40.c)
 *     sub_18010D034 @ 0x18010D034 (sub_18010D034.c)
 * Callees:
 *     sub_180005210 @ 0x180005210 (sub_180005210.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18008745C @ 0x18008745C (sub_18008745C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x18009C7A0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x18009CBC0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D000 (ZwQueryVolumeInformationFile.c)
 *     sub_18010DDA4 @ 0x18010DDA4 (sub_18010DDA4.c)
 *     sub_18010E724 @ 0x18010E724 (sub_18010E724.c)
 */

__int64 __fastcall sub_180087200(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r15d
  __int64 Heap; // r14
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+54h] [rbp-25h] BYREF
  __int64 v18; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v20[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v21[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v22[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v23; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v17 = 0;
  v16 = 0;
  if ( !v4 )
  {
    VolumeInformationFile = sub_18010E724(a1, &v17, &v16);
    if ( VolumeInformationFile < 0 )
      goto LABEL_22;
    *(_DWORD *)(a1 + 392) += v17;
    *(_DWORD *)(a1 + 388) += v16;
  }
  if ( *(_QWORD *)(a1 + 464) != a1 + 464
    || *(_QWORD *)(a1 + 480) != a1 + 480
    || *(_QWORD *)(a1 + 520)
    || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 208);
  }
  else
  {
    VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v20, v22, 24LL, 3);
    if ( VolumeInformationFile < 0 )
      goto LABEL_22;
    v7 = -v23 & (v23 + 7);
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( !Heap )
  {
    VolumeInformationFile = -1073741801;
    return RtlNtStatusToDosError(VolumeInformationFile);
  }
  v9 = *(_QWORD *)(a1 + 144);
  v18 = 0LL;
  VolumeInformationFile = ZwReadFile(v9, 0LL, 0LL, 0LL, v20, Heap, v7, &v18, 0LL);
  if ( VolumeInformationFile >= 0 )
  {
    v10 = *(_DWORD *)Heap;
    if ( v7 < *(_DWORD *)Heap )
      v10 = v7;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          sub_18010DDA4(a1, Heap, v10, v17, v16);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    sub_18008745C(a1, Heap, v10);
    sub_180005210(a1, Heap, v10);
    v12 = ZwWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v20, Heap, v10, &v18, 0LL);
    VolumeInformationFile = v12;
    if ( !a2 && v12 >= 0 )
    {
      v13 = *(_DWORD *)(a1 + 324);
      if ( (v13 & 0x4000020) != 0 )
      {
        if ( (v13 & 0x4000000) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 360);
          goto LABEL_31;
        }
        v15 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
        if ( v15 < *(unsigned int *)(a1 + 320)
                 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
        {
LABEL_31:
          v19 = v15;
          if ( v15 )
            VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v21, &v19, 8LL, 20);
        }
      }
    }
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_22:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
