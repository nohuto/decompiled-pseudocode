/*
 * XREFs of PspCreatePicoThread @ 0x1408CA870
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspCreateUserContext @ 0x1405E7480 (PspCreateUserContext.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 */

__int64 __fastcall PspCreatePicoThread(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r15
  int v6; // esi
  char *v7; // rbx
  int inserted; // edi
  struct _EX_RUNDOWN_REF *v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  PVOID v13; // r14
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  PVOID v17; // [rsp+70h] [rbp-90h] BYREF
  __int64 v18; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-80h]
  __int64 v20[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v21[62]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22[154]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE AccessState[400]; // [rsp+760h] [rbp+660h] BYREF

  v19 = a3;
  memset(v21, 0, sizeof(v21));
  memset(AccessState, 0, sizeof(AccessState));
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
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
      if ( *((_QWORD *)Object + 232) )
      {
        --CurrentThread->KernelApcDisable;
        v9 = (struct _EX_RUNDOWN_REF *)(v7 + 768);
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)v7 + 96) )
        {
          ObfReferenceObjectWithTag(v7, 0x72437350u);
          memset(v22, 0, sizeof(v22));
          PspCreateUserContext((__int64)v22, 0, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32));
          v6 = 1;
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
                       (ULONG_PTR)v7,
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
                       (__int64)AccessState);
          if ( inserted >= 0 )
          {
            v11 = 0LL;
            if ( a2 )
            {
              v21[56] = a2;
              v11 = v21;
            }
            v12 = *(_QWORD *)(a1 + 184);
            v13 = v17;
            *((_QWORD *)v17 + 245) = v12;
            inserted = PspInsertThread(
                         (char *)v13,
                         (PEPROCESS)v7,
                         0LL,
                         &v15,
                         0x1FFFFF,
                         0LL,
                         (__int64)v11,
                         0LL,
                         (PACCESS_STATE)AccessState,
                         (PVOID *)&v18,
                         0LL);
            if ( inserted >= 0 )
            {
              _interlockedbittestandset((volatile signed __int32 *)v13 + 440, 0x14u);
              inserted = 0;
              v13 = v17;
              v7 = (char *)Object;
              *v19 = v18;
            }
            ObfDereferenceObject(v13);
          }
          ExReleaseRundownProtection_0(v9);
        }
        else
        {
          inserted = -1073741558;
          v6 = 1;
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
  if ( v6 )
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x72437350u);
  return (unsigned int)inserted;
}
