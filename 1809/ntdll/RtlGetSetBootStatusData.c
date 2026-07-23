/*
 * XREFs of RtlGetSetBootStatusData @ 0x1800EDB40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE048 (RtlpGetSetBootStatusData.c)
 */

NTSTATUS __cdecl RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN Read,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // r8
  char v13; // al
  char v14; // [rsp+30h] [rbp-E8h]
  __int64 v15; // [rsp+34h] [rbp-E4h] BYREF
  char v16; // [rsp+40h] [rbp-D8h] BYREF

  if ( Read )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 168, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v15);
      if ( result >= 0 )
      {
        v9 = (unsigned int)v15;
        if ( ReturnLength )
          *ReturnLength = v15;
        if ( (_DWORD)v9 )
        {
          v10 = v9;
          v11 = &v16;
          v12 = v9;
          v13 = v14;
          do
          {
            v13 += *v11++;
            --v12;
          }
          while ( v12 );
          do
          {
            v13 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v10;
          }
          while ( v10 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
