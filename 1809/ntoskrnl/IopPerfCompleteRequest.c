/*
 * XREFs of IopPerfCompleteRequest @ 0x14028563C
 * Callers:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140924FD4 (IovCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140107CCC (IopIrpHasExtensionType.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     IopProcessIoTracking @ 0x140285B04 (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(ULONG_PTR BugCheckParameter1, unsigned __int8 a2)
{
  char v4; // cl
  char v5; // dl
  __int64 v6; // r14
  unsigned __int8 *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  signed __int32 v10; // esi
  bool v11; // sf
  char v12; // al
  ULONG_PTR v13; // [rsp+30h] [rbp-39h] BYREF
  signed __int32 v14; // [rsp+38h] [rbp-31h]
  unsigned __int8 *v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h]
  __int64 v17; // [rsp+50h] [rbp-19h]
  signed __int32 v18; // [rsp+58h] [rbp-11h]
  unsigned __int8 v19; // [rsp+5Ch] [rbp-Dh]
  _QWORD v20[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v21; // [rsp+70h] [rbp+7h]
  _QWORD *v22; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  ULONG_PTR *v25; // [rsp+88h] [rbp+1Fh] BYREF
  int v26; // [rsp+90h] [rbp+27h]
  int v27; // [rsp+94h] [rbp+2Bh]

  if ( *(_WORD *)BugCheckParameter1 == 6 )
  {
    v4 = *(_BYTE *)(BugCheckParameter1 + 66);
    v5 = *(_BYTE *)(BugCheckParameter1 + 67);
    if ( v5 <= (char)(v4 + 1) )
    {
      v6 = 0LL;
      v7 = 0LL;
      if ( v5 <= v4 )
      {
        v7 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
        if ( *((_QWORD *)v7 + 5) )
        {
          if ( (IopPerfStatus & 2) != 0
            && IopIrpHasExtensionType(BugCheckParameter1, 1u)
            && !IopIrpHasExtensionType(v8, 4u) )
          {
            IopProcessIoTracking(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
              *(unsigned int *)(*((_QWORD *)v7 + 5) + 72LL));
            IopFreeIrpExtension(BugCheckParameter1, 1, 1);
          }
          v9 = *(_QWORD *)(*((_QWORD *)v7 + 5) + 8LL);
          if ( v9 && *v7 <= 0x1Bu )
            v6 = *(_QWORD *)(v9 + 8LL * *v7 + 112);
        }
        else
        {
          v6 = *((_QWORD *)v7 + 7);
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v24 = 0;
        v20[0] = v6;
        v20[1] = BugCheckParameter1;
        v10 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v21 = v10;
        v22 = v20;
        v23 = 20;
        EtwTraceKernelEvent((__int64)&v22, 1u, 0x20000010u, 0x134u, 0x401802u);
        if ( !v7 )
        {
LABEL_19:
          IopfCompleteRequest(BugCheckParameter1, a2);
          v27 = 0;
          v25 = &v13;
          v13 = BugCheckParameter1;
          v14 = v10;
          v26 = 12;
          EtwTraceKernelEvent((__int64)&v25, 1u, 0x20000010u, 0x135u, 0x401802u);
          return;
        }
        v17 = 0LL;
        v11 = *(int *)(BugCheckParameter1 + 48) < 0;
        v16 = *((_QWORD *)v7 + 8);
        v15 = v7;
        v18 = v10;
        v19 = v7[3];
        v12 = v7[3];
        if ( v11 )
        {
          if ( v12 < 0 )
            goto LABEL_17;
        }
        else if ( (v12 & 0x40) != 0 )
        {
          goto LABEL_17;
        }
        if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v12 & 0x20) == 0 )
        {
          v7[3] = v12 | 0xC0;
          goto LABEL_18;
        }
LABEL_17:
        v17 = *((_QWORD *)v7 + 7);
        v16 = *((_QWORD *)v7 + 8);
LABEL_18:
        *((_QWORD *)v7 + 7) = IopPerfCompletionRoutine;
        *((_QWORD *)v7 + 8) = &v15;
        goto LABEL_19;
      }
    }
  }
  IopfCompleteRequest(BugCheckParameter1, a2);
}
