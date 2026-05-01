/*
 * XREFs of ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x180356380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x180355B6C (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180356C2C (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 */

__int64 __fastcall ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run(__int64 a1)
{
  volatile signed __int32 *v1; // rdx
  SwitchItemFilteredCollection *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 16LL);
  v3 = (SwitchItemFilteredCollection *)v1;
  if ( v1 )
  {
    _InterlockedIncrement(v1 + 45);
    SwitchItemFilteredCollection::_ApplyFilterToItem(v3, *(struct IObservableItem **)(a1 + 24), 0);
  }
  return Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease((__int64 *)&v3);
}
