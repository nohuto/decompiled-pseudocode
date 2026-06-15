/*
 * XREFs of ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x1400027EC
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002910 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x1400028D8 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 *     memcpy_0 @ 0x1400181EF (memcpy_0.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::FillRampBuffer(CCrossProcessServerInputEndpoint *this)
{
  unsigned int v1; // esi
  int v2; // edx
  bool v3; // zf
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned int v10; // ebp
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rbx

  v1 = *((_DWORD *)this + 22) * *((_DWORD *)this + 119);
  v2 = 128;
  v3 = *((_DWORD *)this + 26) == 8;
  v5 = (void *)*((_QWORD *)this + 14);
  if ( !v3 )
    v2 = 0;
  memset_0(v5, v2, v1);
  v6 = *((_QWORD *)this + 9);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 24);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(this, v7) && CCrossProcessBaseEndpoint::IsValidOffset(this, v8) )
  {
    v9 = *((_QWORD *)this + 10);
    v10 = v7 - v8;
    v11 = *(_DWORD *)(v9 + 152) + (unsigned int)(v8 % *((unsigned int *)this + 38));
    if ( v1 >= v10 )
      v1 = v10;
    v12 = *(_DWORD *)(v9 + 156) - v11;
    if ( v12 >= v1 )
      v12 = v1;
    v13 = v12;
    memcpy_0(*((void **)this + 14), (const void *)(*((_QWORD *)this + 9) + v11), v12);
    memcpy_0(
      (void *)(*((_QWORD *)this + 14) + v13),
      (const void *)(*((_QWORD *)this + 9) + *(unsigned int *)(*((_QWORD *)this + 10) + 152LL)),
      v1 - (unsigned int)v13);
  }
}
