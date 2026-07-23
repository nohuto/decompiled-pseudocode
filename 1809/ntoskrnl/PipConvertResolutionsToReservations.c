/*
 * XREFs of PipConvertResolutionsToReservations @ 0x14075EB00
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1406EE6C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipDeleteAllDependencyRelations @ 0x14075E9EC (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PipDeleteBindingIds @ 0x14075EB60 (PipDeleteBindingIds.c)
 *     PipSetDependency @ 0x140825410 (PipSetDependency.c)
 */

__int64 __fastcall PipConvertResolutionsToReservations(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v3; // r14
  _QWORD *v4; // rbx
  _QWORD *v6; // rsi
  _QWORD *v7; // rdi
  _QWORD *v8; // rdx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]

  if ( a1 )
  {
    v2 = 0;
    PipDeleteBindingIds();
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(_QWORD **)(a1 + 32);
    while ( v4 != v3 )
    {
      v6 = v4;
      v4 = (_QWORD *)*v4;
      if ( !*((_BYTE *)v6 + 56) )
      {
        v7 = (_QWORD *)v6[5];
        while ( v7 != v6 + 5 )
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          if ( *((_DWORD *)v8 + 4) == 1 )
          {
            v9 = v6[3];
            v10 = 0;
            v11 = *(_QWORD *)(v9 + 48);
            v2 = PipSetDependency(&v10);
          }
        }
        *((_BYTE *)v6 + 56) = 1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
