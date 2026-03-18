/*
 * XREFs of PspCopyAndFixupParameters @ 0x14067A908
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x140679A54 (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(struct _KPROCESS *a1, void **a2, __int64 a3)
{
  unsigned int *v4; // r14
  size_t v5; // r15
  char *v6; // rbx
  struct _KPROCESS *v7; // r10
  char PreviousMode; // r9
  int v9; // eax
  signed __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 result; // rax
  unsigned int *v24; // r8
  __int64 *v25; // r15
  unsigned int v26; // r12d
  void **v27; // rsi
  void *v28; // rdx
  __int64 v29; // rcx
  size_t v30; // [rsp+40h] [rbp-48h]
  PRKPROCESS PROCESS; // [rsp+90h] [rbp+8h]
  char v32; // [rsp+98h] [rbp+10h]
  __int64 v33; // [rsp+A0h] [rbp+18h] BYREF
  struct _KPROCESS *v34; // [rsp+A8h] [rbp+20h]

  PROCESS = a1;
  v4 = *(unsigned int **)(a3 + 208);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v30 = v5;
  v6 = *(char **)(a3 + 216);
  v7 = KeGetCurrentThread()->ApcState.Process;
  v34 = v7;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v9 = ObDuplicateObject(a1, *((void **)v4 + 2), v7, &v33, 0, 0, 6, PreviousMode);
    a1 = PROCESS;
    v7 = v34;
    PreviousMode = v32;
    if ( v9 >= 0 )
      *((_QWORD *)v4 + 2) = v33;
  }
  if ( a2 )
  {
    v24 = v4 + 8;
    v25 = (__int64 *)(v4 + 8);
    v26 = 0;
    v27 = a2;
    while ( 1 )
    {
      v28 = *v27;
      if ( *v27 )
      {
        if ( (int)v28 < 0 )
        {
          v29 = 0LL;
          v33 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v28, v7, &v33, 0, 0, 6, PreviousMode);
          v29 = v33;
          v24 = v4 + 8;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == (void **)v24 )
            return result;
        }
        else
        {
          *v25 = v29;
        }
      }
      ++v25;
      ++v26;
      ++v27;
      if ( v26 >= 3 )
        break;
      a1 = PROCESS;
      v7 = v34;
      PreviousMode = v32;
    }
    v5 = v30;
  }
  v10 = v6 - (char *)v4;
  memmove(v6, v4, v5);
  v11 = *((_QWORD *)v6 + 8);
  if ( v11 )
    *((_QWORD *)v6 + 8) = v10 + v11;
  v12 = *((_QWORD *)v6 + 11);
  if ( v12 )
    *((_QWORD *)v6 + 11) = v10 + v12;
  v13 = *((_QWORD *)v6 + 13);
  if ( v13 )
    *((_QWORD *)v6 + 13) = v10 + v13;
  v14 = *((_QWORD *)v6 + 15);
  if ( v14 )
    *((_QWORD *)v6 + 15) = v10 + v14;
  v15 = *((_QWORD *)v6 + 23);
  if ( v15 )
    *((_QWORD *)v6 + 23) = v10 + v15;
  v16 = *((_QWORD *)v6 + 25);
  if ( v16 )
    *((_QWORD *)v6 + 25) = v10 + v16;
  v17 = *((_QWORD *)v6 + 27);
  if ( v17 )
    *((_QWORD *)v6 + 27) = v10 + v17;
  v18 = *((_QWORD *)v6 + 29);
  if ( v18 )
    *((_QWORD *)v6 + 29) = v10 + v18;
  v19 = *((_QWORD *)v6 + 131);
  if ( v19 )
    *((_QWORD *)v6 + 131) = v10 + v19;
  v20 = *((_QWORD *)v6 + 133);
  if ( v20 )
    *((_QWORD *)v6 + 133) = v10 + v20;
  v21 = *((_QWORD *)v6 + 134);
  if ( v21 )
    *((_QWORD *)v6 + 134) = v10 + v21;
  v22 = *((_QWORD *)v6 + 16);
  if ( v22 )
    *((_QWORD *)v6 + 16) = v10 + v22;
  *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[0] + 32) = v6;
  return 0LL;
}
