/*
 * XREFs of ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140106E88
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1401069F4 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorkerThreadStartThread(
        __int64 a1,
        void *a2,
        KSTART_ROUTINE *a3,
        PVOID *a4)
{
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  HANDLE v7; // rcx
  HANDLE v8; // rbx
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+58h] [rbp-18h] BYREF
  int v14; // [rsp+68h] [rbp-8h]
  int v15; // [rsp+6Ch] [rbp-4h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  ThreadHandle = 0LL;
  v15 = 0;
  v12[1] = 0;
  v14 = -1;
  v13[1] = v13;
  v13[0] = v13;
  v11 = a1;
  v12[0] = 393216;
  v5 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, a2, 0LL, a3, &v11);
  if ( v5 < 0 )
  {
    v8 = ThreadHandle;
  }
  else
  {
    v6 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v7 = ThreadHandle;
    v5 = v6;
    *a4 = Object;
    ObCloseHandle(v7, 0);
    v8 = 0LL;
    KeWaitForSingleObject(v12, Executive, 0, 0, 0LL);
    if ( v14 >= 0 )
      return (unsigned int)v5;
    v5 = v14;
  }
  if ( v8 )
    ObCloseHandle(v8, 0);
  return (unsigned int)v5;
}
