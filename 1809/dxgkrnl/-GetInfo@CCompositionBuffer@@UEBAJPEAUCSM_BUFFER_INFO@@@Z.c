/*
 * XREFs of ?GetInfo@CCompositionBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0055CA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionBuffer::GetInfo(CCompositionBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 1;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_QWORD *)a2 + 16) = *((_QWORD *)this + 20);
  result = (*(__int64 (__fastcall **)(CCompositionBuffer *, __int64 *))(*(_QWORD *)this + 216LL))(this, &v5);
  if ( (int)result >= 0 )
  {
    v4 = v5;
    *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)(v5 + 24);
    *(_OWORD *)((char *)a2 + 152) = *(_OWORD *)(v4 + 40);
  }
  return result;
}
