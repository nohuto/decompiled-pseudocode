/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x180063EAC
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18005F194 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008CD8 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x180027A64 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

char **__fastcall std::vector<unsigned short>::vector<unsigned short>(char **a1, unsigned __int64 a2)
{
  char *v4; // rax
  size_t v5; // r8
  char *v6; // rax
  char *v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v4 = (char *)std::allocator<unsigned short>::allocate((__int64)a1, a2);
    *a1 = v4;
    a1[1] = v4;
    v5 = 2 * a2;
    v6 = *a1;
    a1[2] = &(*a1)[2 * a2];
    v7 = &v6[2 * a2];
    memset_0(v6, 0, v5);
    a1[1] = v7;
  }
  return a1;
}
