/*
 * XREFs of PspCopyAndFixupParameters @ 0x140679DE4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14067912C (PspSetupUserProcessAddressSpace.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 */

__int64 __fastcall PspCopyAndFixupParameters(ULONG_PTR a1, void **a2, __int64 a3)
{
  unsigned int *v4; // r14
  size_t v5; // r15
  char *v6; // rbx
  struct _KPROCESS *Process; // r10
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
  __int64 result; // rax
  unsigned int *v22; // r8
  __int64 *v23; // rsi
  unsigned int v24; // r12d
  void **v25; // r15
  void *v26; // rdx
  __int64 v27; // rcx
  size_t v28; // [rsp+40h] [rbp-48h]
  ULONG_PTR v29; // [rsp+90h] [rbp+8h]
  char v30; // [rsp+98h] [rbp+10h]
  __int64 v31; // [rsp+A0h] [rbp+18h] BYREF
  struct _KPROCESS *v32; // [rsp+A8h] [rbp+20h]

  v29 = a1;
  v4 = *(unsigned int **)(a3 + 208);
  v5 = *((_QWORD *)v4 + 126) + *v4;
  v28 = v5;
  v6 = *(char **)(a3 + 216);
  Process = KeGetCurrentThread()->ApcState.Process;
  v32 = Process;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  if ( (*(_BYTE *)(a3 + 8) & 0x40) != 0 && (*(_BYTE *)(a3 + 9) & 1) == 0 )
    v4[2] |= 0x4000u;
  if ( *(_DWORD *)(a3 + 80) == 3 && (int)v4[4] > 0 )
  {
    v9 = ObDuplicateObject(a1, *((void **)v4 + 2), Process, &v31, 0, 0, 6, PreviousMode);
    a1 = v29;
    Process = v32;
    PreviousMode = v30;
    if ( v9 >= 0 )
      *((_QWORD *)v4 + 2) = v31;
  }
  if ( a2 )
  {
    v22 = v4 + 8;
    v23 = (__int64 *)(v4 + 8);
    v24 = 0;
    v25 = a2;
    while ( 1 )
    {
      v26 = *v25;
      if ( *v25 )
      {
        if ( (int)v26 < 0 )
        {
          v27 = 0LL;
          v31 = 0LL;
          result = 3221225480LL;
        }
        else
        {
          result = ObDuplicateObject(a1, v26, Process, &v31, 0, 0, 6, PreviousMode);
          v27 = v31;
          v22 = v4 + 8;
        }
        if ( (int)result < 0 )
        {
          if ( a2 == (void **)v22 )
            return result;
        }
        else
        {
          *v23 = v27;
        }
      }
      ++v23;
      ++v24;
      ++v25;
      if ( v24 >= 3 )
        break;
      a1 = v29;
      Process = v32;
      PreviousMode = v30;
    }
    v5 = v28;
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
  v20 = *((_QWORD *)v6 + 16);
  if ( v20 )
    *((_QWORD *)v6 + 16) = v10 + v20;
  *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] + 32) = v6;
  return 0LL;
}
