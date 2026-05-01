/*
 * XREFs of memcpy_s_1 @ 0x1801524E4
 * Callers:
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x180150AB0 (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 *     ?DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180285868 (-DeserializePropertySet@@YAJPEAUMsgBlob@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180087CC6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B0F57 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_1(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
