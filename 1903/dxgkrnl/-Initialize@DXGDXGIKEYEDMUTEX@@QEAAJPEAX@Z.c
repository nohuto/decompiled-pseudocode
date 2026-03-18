/*
 * XREFs of ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C0272A04
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0278F4C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::Initialize(DXGDXGIKEYEDMUTEX *this, void *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rcx
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v11; // rax
  struct _OBJECT_HANDLE_INFORMATION v12; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = ObReferenceObjectByHandle(a2, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)&v13, &v12);
  v7 = v13;
  v8 = v4;
  *(_QWORD *)this = v13;
  if ( v4 >= 0 )
  {
    if ( v7[3] && v7[4] )
    {
      return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v7, v5, v6);
      *(_QWORD *)(v11 + 24) = a2;
      WdLogEvent5_WdError(v11);
      return 3221225485LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v5, v6);
    *(_QWORD *)(v9 + 24) = a2;
    WdLogEvent5_WdError(v9);
    return v8;
  }
}
