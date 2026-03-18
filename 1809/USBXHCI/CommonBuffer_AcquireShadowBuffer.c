/*
 * XREFs of CommonBuffer_AcquireShadowBuffer @ 0x1C000AA20
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C000B0A0 (XilCommonBuffer_AcquireBufferEx.c)
 *     TR_AcquireSecureSegments @ 0x1C0023730 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C0023FEC (TR_CreateSecureObject.c)
 * Callees:
 *     memset @ 0x1C0006FC0 (memset.c)
 */

_DWORD *__fastcall CommonBuffer_AcquireShadowBuffer(int a1, __int64 a2, int a3)
{
  unsigned int v3; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx

  v3 = a1 + 88;
  PoolWithTag = ExAllocatePoolWithTag(
                  *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                  (unsigned int)(a1 + 88),
                  0x49434858u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v8[10] = v3;
    *((_QWORD *)v8 + 2) = v8 + 22;
    v8[11] = a1;
    v8[16] = a3;
    *((_QWORD *)v8 + 9) = a2;
    v8[20] = 2;
  }
  return v8;
}
