/*
 * XREFs of RtlGetSetBootStatusData @ 0x140741AF0
 * Callers:
 *     PopBootStatSet @ 0x140738B08 (PopBootStatSet.c)
 *     PopBootStatGet @ 0x14077916C (PopBootStatGet.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpGetSetBootStatusData @ 0x140741C5C (RtlpGetSetBootStatusData.c)
 */

NTSTATUS __stdcall RtlGetSetBootStatusData(
        HANDLE FileHandle,
        BOOLEAN WriteMode,
        RTL_BSD_ITEM_TYPE DataClass,
        PVOID Buffer,
        ULONG BufferSize,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rcx
  __int64 v14; // r8
  char v15; // al
  char v16; // [rsp+30h] [rbp-F8h]
  __int64 v17; // [rsp+34h] [rbp-F4h] BYREF
  _BYTE v18[176]; // [rsp+40h] [rbp-E8h] BYREF

  memset(v18, 0, 0xA8uLL);
  if ( WriteMode )
    return RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)ReturnLength);
  if ( DataClass == RtlBsdItemChecksum )
    return -1073741811;
  result = RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
  if ( result >= 0 )
  {
    result = RtlpGetSetBootStatusData(FileHandle, 168, 0LL);
    if ( result >= 0 )
    {
      result = RtlpGetSetBootStatusData(FileHandle, BufferSize, (__int64)&v17);
      if ( result >= 0 )
      {
        v11 = (unsigned int)v17;
        if ( ReturnLength )
          *ReturnLength = v17;
        if ( (_DWORD)v11 )
        {
          v12 = v11;
          v13 = v18;
          v14 = v11;
          v15 = v16;
          do
          {
            v15 += *v13++;
            --v14;
          }
          while ( v14 );
          do
          {
            v15 -= *(_BYTE *)Buffer;
            Buffer = (char *)Buffer + 1;
            --v12;
          }
          while ( v12 );
        }
        return RtlpGetSetBootStatusData(FileHandle, 1, 0LL);
      }
    }
  }
  return result;
}
