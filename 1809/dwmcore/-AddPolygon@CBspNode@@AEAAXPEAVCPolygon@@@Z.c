/*
 * XREFs of ?AddPolygon@CBspNode@@AEAAXPEAVCPolygon@@@Z @ 0x180230FA8
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180231094 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@QEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x1801532C4 (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 */

void __fastcall CBspNode::AddPolygon(CBspNode *this, struct CPolygon *a2)
{
  __int64 *v2; // rcx
  _QWORD *v4; // rdx
  struct CPolygon *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (__int64 *)((char *)this + 32);
  v4 = (_QWORD *)v2[1];
  if ( (_QWORD *)v2[2] == v4 )
  {
    std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(v2, v4, &v5);
  }
  else
  {
    *v4 = a2;
    v2[1] += 8LL;
  }
  (**(void (__fastcall ***)(struct CPolygon *))a2)(a2);
}
