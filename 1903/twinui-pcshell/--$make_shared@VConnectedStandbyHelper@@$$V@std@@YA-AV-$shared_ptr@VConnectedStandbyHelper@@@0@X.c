/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x180267F28
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802704A0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802807A0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18026618C (--$-0$$V@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v7; // rax
  std::_Ref_count_base *v8; // rcx
  void *v10; // [rsp+40h] [rbp+8h]

  v10 = operator new(0x48uLL);
  v2 = std::_Ref_count_obj<ConnectedStandbyHelper>::_Ref_count_obj<ConnectedStandbyHelper>((__int64)v10);
  a1[1] = v2;
  v3 = (_QWORD *)(v2 + 16);
  *a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    v5 = (volatile signed __int32 *)v2;
    if ( !(v4 ? *(_DWORD *)(v4 + 8) : 0) )
    {
      if ( v2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
        v5 = (volatile signed __int32 *)a1[1];
      }
      v7 = v5;
      if ( v5 )
        _InterlockedIncrement(v5 + 3);
      *v3 = v3;
      v8 = (std::_Ref_count_base *)v3[1];
      v3[1] = v5;
      if ( v8 )
      {
        std::_Ref_count_base::_Decwref(v8);
        v7 = v5;
      }
      if ( v7 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
    }
  }
  return a1;
}
