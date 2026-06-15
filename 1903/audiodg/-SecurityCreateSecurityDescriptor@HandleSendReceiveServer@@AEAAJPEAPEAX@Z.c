/*
 * XREFs of ?SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z @ 0x140041CEC
 * Callers:
 *     ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x1400415B8 (-AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

signed int __fastcall HandleSendReceiveServer::SecurityCreateSecurityDescriptor(
        HandleSendReceiveServer *this,
        void **a2)
{
  signed int result; // eax
  HandleSendReceiveServer *SecurityDescriptorSize; // [rsp+30h] [rbp+8h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp+10h] BYREF

  SecurityDescriptorSize = this;
  *a2 = 0LL;
  if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
         L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)(A;;0x1;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-35265931"
          "81-1159816984-2199008581-497492991)",
         1u,
         &SecurityDescriptor,
         (PULONG)&SecurityDescriptorSize) )
  {
    *a2 = SecurityDescriptor;
    return 0;
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
