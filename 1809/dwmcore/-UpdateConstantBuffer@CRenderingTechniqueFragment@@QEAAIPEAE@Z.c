/*
 * XREFs of ?UpdateConstantBuffer@CRenderingTechniqueFragment@@QEAAIPEAE@Z @ 0x1800E0110
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800C6DD0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 * Callees:
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::UpdateConstantBuffer(
        CRenderingTechniqueFragment *this,
        unsigned __int8 *a2)
{
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  const void *v9; // rax

  result = *((unsigned int *)this + 5);
  if ( (_DWORD)result )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 80LL))(
           *(_QWORD *)this,
           *((unsigned int *)this + 4));
    v6 = *(_QWORD *)this;
    v7 = *((unsigned int *)this + 4);
    v8 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 6) = v5;
    v9 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, v7);
    memcpy_0(a2, v9, v8);
    result = *((unsigned int *)this + 5);
  }
  if ( (result & 0xF) != 0 )
    return (unsigned int)result - (result & 0xF) + 16;
  return result;
}
