/*
 * XREFs of PspCreatePicoThread @ 0x14088D6A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspInsertThread @ 0x140622450 (PspInsertThread.c)
 *     PspCreateUserContext @ 0x140622CFC (PspCreateUserContext.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  int v4; // esi
  char *v7; // rbx
  int inserted; // edi
  struct _EX_RUNDOWN_REF *v9; // r13
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  volatile signed __int32 *v13; // r14
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  PVOID v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-80h]
  __int64 v20[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v21[62]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22[154]; // [rsp+290h] [rbp+190h] BYREF
  struct _ACCESS_STATE v23[2]; // [rsp+760h] [rbp+660h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v19 = a3;
  v17 = 0LL;
  Object = 0LL;
  if ( *(_QWORD *)(a1 + 184) )
  {
    inserted = ObpReferenceObjectByHandleWithTag(
                 *(_QWORD *)a1,
                 2,
                 (__int64)PsProcessType,
                 0,
                 0x72437350u,
                 &Object,
                 0LL,
                 0LL);
    if ( inserted >= 0 )
    {
      v7 = (char *)Object;
      if ( *((_QWORD *)Object + 226) )
      {
        --CurrentThread->KernelApcDisable;
        v9 = (struct _EX_RUNDOWN_REF *)(v7 + 760);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v7 + 95) )
        {
          ObfReferenceObjectWithTag(v7, 0x72437350u);
          memset(v22, 0, sizeof(v22));
          PspCreateUserContext((__int64)v22, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
          v4 = 1;
          v10 = *(_QWORD *)(a1 + 8);
          HIWORD(v22[7]) = *(_WORD *)(a1 + 56);
          LOWORD(v22[8]) = *(_WORD *)(a1 + 58);
          v20[1] = *(_QWORD *)(a1 + 40);
          v20[2] = *(_QWORD *)(a1 + 48);
          v22[15] = *(_QWORD *)(a1 + 64);
          v22[18] = *(_QWORD *)(a1 + 72);
          v22[22] = *(_QWORD *)(a1 + 96);
          v22[21] = *(_QWORD *)(a1 + 104);
          v22[20] = *(_QWORD *)(a1 + 112);
          v22[23] = *(_QWORD *)(a1 + 120);
          v22[24] = *(_QWORD *)(a1 + 128);
          v22[25] = *(_QWORD *)(a1 + 136);
          v22[26] = *(_QWORD *)(a1 + 144);
          v22[27] = *(_QWORD *)(a1 + 152);
          v22[28] = *(_QWORD *)(a1 + 160);
          v22[29] = *(_QWORD *)(a1 + 168);
          v22[30] = *(_QWORD *)(a1 + 176);
          v22[19] = v10;
          v20[0] = 0LL;
          LODWORD(v15) = 1;
          inserted = PspAllocateThread(
                       (_KPROCESS *)v7,
                       0LL,
                       0,
                       0LL,
                       v22,
                       v20,
                       0LL,
                       0LL,
                       (int *)&v15,
                       &v17,
                       0LL,
                       (__int64)v23);
          if ( inserted >= 0 )
          {
            v11 = 0LL;
            if ( a2 )
            {
              memset(v21, 0, 0x1E8uLL);
              v11 = v21;
              v21[56] = a2;
            }
            v12 = *(_QWORD *)(a1 + 184);
            v13 = (volatile signed __int32 *)v17;
            *((_QWORD *)v17 + 243) = v12;
            inserted = PspInsertThread(
                         (ULONG_PTR)v13,
                         (PEPROCESS)v7,
                         0LL,
                         &v15,
                         0x1FFFFFu,
                         0LL,
                         (__int64)v11,
                         0LL,
                         v23,
                         (PVOID *)&v18,
                         0LL);
            if ( inserted >= 0 )
            {
              _interlockedbittestandset(v13 + 436, 0x14u);
              inserted = 0;
              v13 = (volatile signed __int32 *)v17;
              v7 = (char *)Object;
              *v19 = v18;
            }
            ObfDereferenceObject((PVOID)v13);
          }
          ExReleaseRundownProtection_0(v9);
        }
        else
        {
          inserted = -1073741558;
          v4 = 1;
        }
      }
      else
      {
        inserted = -1073741816;
      }
    }
    else
    {
      v7 = 0LL;
    }
  }
  else
  {
    v7 = (char *)Object;
    inserted = -1073741811;
  }
  if ( v4 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x72437350u);
  return (unsigned int)inserted;
}
