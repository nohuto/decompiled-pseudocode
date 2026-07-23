/*
 * XREFs of TpAllocIoCompletion @ 0x180062780
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     sub_180037DCC @ 0x180037DCC (sub_180037DCC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180062AF0 @ 0x180062AF0 (sub_180062AF0.c)
 *     sub_180062DB0 @ 0x180062DB0 (sub_180062DB0.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r13
  DWORD Flags; // edi
  char *Heap; // rax
  char *v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  char *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char *BaseAddress; // [rsp+70h] [rbp+8h]

  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = sub_180037DCC((__int64)Heap, (__int64)Context, (__int64)CallbackEnviron, Flags, (__int64)&off_180118410);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *((_QWORD *)v11 + 10) = Callback;
        *((_QWORD *)v11 + 34) = File;
        *((_DWORD *)v11 + 70) = 0;
        v13 = *((_QWORD *)v11 + 18);
        *((_QWORD *)v11 + 32) = sub_180033520;
        v14 = v11 + 268;
        v15 = v11 + 264;
        if ( v13 )
        {
          sub_180031620(v13, (_DWORD *)v11 + 66, (BYTE *)v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *((_QWORD *)v11 + 29) = 0LL;
        *((_QWORD *)v11 + 31) = v11 + 240;
        *((_QWORD *)v11 + 30) = v11 + 240;
        *((_QWORD *)v11 + 25) = off_180118320;
        *((_DWORD *)v11 + 52) = *v15;
        v11[212] = *v14;
        v12 = sub_180062AF0(File, v11 + 200, *((_QWORD *)v11 + 18));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *((_QWORD *)v11 + 4) = CallbackEnviron->FinalizationCallback;
          if ( *((_QWORD *)v11 + 2) )
            sub_180062DB0(v11);
        }
        if ( v12 < 0 )
          sub_18003741C(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_22;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_180166080 + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_22:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    sub_18010EFC8(IoReturn, File, Callback);
    return -1073741811;
  }
}
