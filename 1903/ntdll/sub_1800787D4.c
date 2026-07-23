/*
 * XREFs of sub_1800787D4 @ 0x1800787D4
 * Callers:
 *     TpAllocAlpcCompletion @ 0x1800786B0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x1800787B0 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180062DB0 @ 0x180062DB0 (sub_180062DB0.c)
 *     ZwAlpcSetInformation @ 0x18009D830 (ZwAlpcSetInformation.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_1800787D4(PPEB_LDR_DATA Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _QWORD *p_Length; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  PPEB_LDR_DATA v16; // rcx
  _BYTE *v17; // rbx
  _DWORD *v18; // rsi
  __int64 v19; // rsi
  int v21; // [rsp+30h] [rbp-48h]
  _QWORD PortInformation[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *BaseAddress; // [rsp+80h] [rbp+8h]

  p_Length = &Ldr->Length;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_18010EFC8(Ldr, a2, a3);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v14 = sub_180037DCC((__int64)(Heap + 9), a4, a5, v9, (__int64)off_1801187B8);
    v21 = v14;
    if ( v14 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      v11[34] = a2;
      v16 = (PPEB_LDR_DATA)v11[27];
      v11[7] = sub_1800332A0;
      v17 = (char *)v11 + 68;
      v18 = v11 + 8;
      if ( v16 )
      {
        sub_180031620((__int64)v16, (_DWORD *)v11 + 16, (BYTE *)v11 + 68);
      }
      else
      {
        *v18 = 0;
        *v17 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = off_180118320;
      *((_DWORD *)v11 + 2) = *v18;
      *((_BYTE *)v11 + 12) = *v17;
      v19 = v11[27];
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v19 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = ZwAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            sub_180031B40(v19, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      sub_18010EFC8(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v21 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v21 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          sub_180062DB0((__int64)v12);
      }
      if ( v14 < 0 )
        sub_18003741C(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v21 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_28;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v21;
  }
  if ( v14 >= 0 )
LABEL_28:
    *p_Length = v11;
  return (unsigned int)v14;
}
