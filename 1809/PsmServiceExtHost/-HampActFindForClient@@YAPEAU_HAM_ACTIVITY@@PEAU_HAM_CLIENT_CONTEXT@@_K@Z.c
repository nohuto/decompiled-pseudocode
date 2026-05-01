/*
 * XREFs of ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A9D4
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18000A3A0 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A730 (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000DD60 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x18002D830 (-HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMIN.c)
 *     ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x180067AF4 (-HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z.c)
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180067E4C (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActCompareByHandle@@YAJPEAX0@Z @ 0x1800379F0 (-HampActCompareByHandle@@YAJPEAX0@Z.c)
 */

struct _HAM_ACTIVITY *__fastcall HampActFindForClient(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // esi
  int v9; // eax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1 + 216LL;
  v13 = a2;
  v4 = v3 + 16;
  RtlAcquireSRWLockShared(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = 0LL;
  v7 = *(_QWORD *)v3;
  if ( (v5 & 1) != 0 )
  {
    if ( v7 )
      v7 ^= v3;
    else
      v7 = 0LL;
  }
  v8 = v5 & 1;
  while ( v7 )
  {
    v9 = HampActCompareByHandle(&v13, (void *)v7);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v7;
    }
    if ( v8 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  v11 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v11 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v11 )
  {
    if ( *(struct _HAM_CLIENT_CONTEXT **)(v11 + 64) == a1 )
      return (struct _HAM_ACTIVITY *)v11;
    else
      CemRcObjectDereference((_QWORD *)v11);
  }
  return (struct _HAM_ACTIVITY *)v6;
}
