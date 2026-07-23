/*
 * XREFs of TpAllocJobNotification @ 0x18007E070
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_180031B40 @ 0x180031B40 (sub_180031B40.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180062DB0 @ 0x180062DB0 (sub_180062DB0.c)
 *     ZwSetInformationJobObject @ 0x18009F8F0 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpAllocJobNotification(PPEB_LDR_DATA Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *p_Length; // r14
  _QWORD *Heap; // rax
  _QWORD *v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _DWORD *v14; // r15
  _BYTE *v15; // rbp
  __int64 v16; // r15
  _QWORD JobObjectInformation[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  p_Length = &Ldr->Length;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    sub_18010EFC8(Ldr, a2, a3);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3407872, 0x128uLL);
  v11 = Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x128uLL);
  v11[31] = retaddr;
  v12 = sub_180037DCC((__int64)(v11 + 9), a4, a5, v5, (__int64)off_180118868);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = v11[27];
  v11[19] = a3;
  v14 = v11 + 8;
  v11[34] = a2;
  v15 = (char *)v11 + 68;
  v11[7] = sub_18007FC20;
  if ( v13 )
  {
    sub_180031620(v13, (_DWORD *)v11 + 16, (BYTE *)v11 + 68);
  }
  else
  {
    *v14 = 0;
    *v15 = 0;
  }
  v11[4] = 0LL;
  v11[6] = v11 + 5;
  v11[5] = v11 + 5;
  JobObjectInformation[0] = v11;
  *v11 = off_180118320;
  *((_DWORD *)v11 + 2) = *v14;
  *((_BYTE *)v11 + 12) = *v15;
  v16 = v11[27];
  JobObjectInformation[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, JobObjectAssociateCompletionPortInformation, JobObjectInformation, 0x10u);
  if ( v12 < 0 )
  {
    sub_18003741C(v11 + 9);
    goto LABEL_21;
  }
  sub_180031B40(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
  v11[36] = 0LL;
  if ( a5 )
    v11[13] = *(_QWORD *)(a5 + 48);
  if ( v11[11] )
    sub_180062DB0((__int64)(v11 + 9));
  *p_Length = v11;
  return 0LL;
}
