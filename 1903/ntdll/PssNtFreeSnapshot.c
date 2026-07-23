/*
 * XREFs of PssNtFreeSnapshot @ 0x180110900
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 *     sub_1801134A0 @ 0x1801134A0 (sub_1801134A0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     PssNtValidateDescriptor @ 0x180110D60 (PssNtValidateDescriptor.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  int v3; // eax
  void *v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  int v11; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]
  ULONG_PTR RegionSize; // [rsp+38h] [rbp+10h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 2) != 0 )
    {
      v4 = *(void **)(a1 + 904);
      if ( v4 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
        v3 = *(_DWORD *)(a1 + 4);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) = v3 & 0xFFFFFFFD;
    }
    else if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 904) )
    {
      BaseAddress = *(PVOID *)(a1 + 904);
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      *(_DWORD *)(a1 + 4) &= ~4u;
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v5 = *(void **)(a1 + 1008);
    if ( v5 )
    {
      ZwClose(v5);
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    v6 = *(void **)(a1 + 976);
    if ( v6 )
    {
      ZwClose(v6);
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    v7 = *(void **)(a1 + 920);
    if ( v7 )
    {
      ZwClose(v7);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v8 = *(void **)(a1 + 944);
    if ( v8 )
    {
      ZwClose(v8);
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    v9 = *(void **)(a1 + 896);
    if ( v9 )
    {
      ZwClose(v9);
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    v10 = *(void **)(a1 + 872);
    if ( v10 )
    {
      ZwClose(v10);
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 0x10) != 0 )
    {
      ZwClose(*(HANDLE *)(a1 + 1128));
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      v11 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1136) = 0;
    }
    if ( (v11 & 1) != 0 )
    {
      BaseAddress = (PVOID)a1;
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    return 0LL;
  }
  return result;
}
