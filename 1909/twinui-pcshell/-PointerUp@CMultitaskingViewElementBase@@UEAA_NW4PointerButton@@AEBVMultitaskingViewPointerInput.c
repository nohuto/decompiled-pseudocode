/*
 * XREFs of ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180384C50
 * Callers:
 *     ?PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18038C540 (-PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInpu.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180390720 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x180385AAC (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x180385F14 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerUp(_DWORD *a1, unsigned int a2, __int64 *a3)
{
  char v6; // bl
  _QWORD *v7; // rsi
  __int64 (__fastcall **v8)(_QWORD *, _QWORD, __int64); // rbx
  __int64 v9; // r8
  char v10; // al
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 200LL))(a1, a3);
  v6 = 0;
  if ( a1[25] == a2 )
  {
    v7 = (_QWORD *)*((_QWORD *)a1 + 16);
    if ( v7 )
    {
      v8 = (__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*v7 + 208LL);
      v9 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v12, a3);
      v10 = (*v8)(v7, a2, v9);
    }
    else
    {
      v13 = *a3;
      if ( !(*(unsigned __int8 (__fastcall **)(_DWORD *, __int64 *))(*(_QWORD *)a1 + 112LL))(a1, &v13) )
      {
LABEL_7:
        CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)a1);
        return v6;
      }
      v10 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64 *))(*(_QWORD *)a1 + 552LL))(a1, a2, a3);
    }
    v6 = v10;
    goto LABEL_7;
  }
  return v6;
}
