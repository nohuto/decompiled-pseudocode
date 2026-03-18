/*
 * XREFs of IopPerfCompleteRequest @ 0x14029A368
 * Callers:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140963134 (IovCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x14011A3FC (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x14011A80C (IopIrpHasExtensionType.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopProcessIoTracking @ 0x14029A838 (IopProcessIoTracking.c)
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
  _QWORD v15[4]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v17; // [rsp+70h] [rbp+7h]
  _QWORD *v18; // [rsp+78h] [rbp+Fh] BYREF
  int v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+84h] [rbp+1Bh]
  ULONG_PTR *v21; // [rsp+88h] [rbp+1Fh] BYREF
  int v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+94h] [rbp+2Bh]

  memset(v15, 0, sizeof(v15));
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
        v20 = 0;
        v16[0] = v6;
        v16[1] = BugCheckParameter1;
        v10 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v17 = v10;
        v18 = v16;
        v19 = 20;
        EtwTraceKernelEvent((__int64)&v18, 1u, 0x20000010u, 0x134u, 0x401802u);
        if ( !v7 )
        {
LABEL_19:
          IopfCompleteRequest(BugCheckParameter1, a2);
          v23 = 0;
          v21 = &v13;
          v13 = BugCheckParameter1;
          v14 = v10;
          v22 = 12;
          EtwTraceKernelEvent((__int64)&v21, 1u, 0x20000010u, 0x135u, 0x401802u);
          return;
        }
        v11 = *(int *)(BugCheckParameter1 + 48) < 0;
        v15[1] = *((_QWORD *)v7 + 8);
        v15[0] = v7;
        LODWORD(v15[3]) = v10;
        BYTE4(v15[3]) = v7[3];
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
        v15[2] = *((_QWORD *)v7 + 7);
        v15[1] = *((_QWORD *)v7 + 8);
LABEL_18:
        *((_QWORD *)v7 + 7) = IopPerfCompletionRoutine;
        *((_QWORD *)v7 + 8) = v15;
        goto LABEL_19;
      }
    }
  }
  IopfCompleteRequest(BugCheckParameter1, a2);
}
