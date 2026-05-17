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
  __int64 v4; // r8
  int v5; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( (v3 & 2) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 904);
      if ( v4 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
        v3 = *(_DWORD *)(a1 + 4);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) = v3 & 0xFFFFFFFD;
    }
    else if ( (v3 & 4) != 0 && *(_QWORD *)(a1 + 904) )
    {
      ZwFreeVirtualMemory();
      *(_DWORD *)(a1 + 4) &= ~4u;
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 1008) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 976) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 920) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 944) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 896) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 872) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    v5 = *(_DWORD *)(a1 + 4);
    if ( (v5 & 0x10) != 0 )
    {
      ZwClose();
      *(_DWORD *)(a1 + 4) &= ~0x10u;
      v5 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 1128) = 0LL;
      *(_DWORD *)(a1 + 1136) = 0;
    }
    if ( (v5 & 1) != 0 )
      ZwFreeVirtualMemory();
    return 0LL;
  }
  return result;
}
