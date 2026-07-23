/*
 * XREFs of SeConvertSecurityDescriptorToStringSecurityDescriptor @ 0x140300F10
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 * Callees:
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 */

__int64 __fastcall SeConvertSecurityDescriptorToStringSecurityDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _DWORD *a5)
{
  unsigned int v6; // ebx
  _WORD *v7; // rax
  __int64 result; // rax

  v6 = 0;
  if ( a1 && (_DWORD)a3 || !a4 )
  {
    if ( a1 && a4 && (_DWORD)a3 )
    {
      if ( (_DWORD)a2 != 1 )
      {
        LOWORD(result) = 1305;
        return (unsigned __int16)result | 0xC0070000;
      }
      result = LocalConvertSDToStringSD_Rev1(a1, a2, a3, a1, a3, a4, a5);
    }
    else
    {
      result = 87LL;
    }
    if ( (int)result <= 0 )
      return result;
    return (unsigned __int16)result | 0xC0070000;
  }
  v7 = (_WORD *)SddlpAlloc(2uLL);
  *a4 = v7;
  if ( v7 )
  {
    *v7 = 0;
    if ( a5 )
      *a5 = 0;
  }
  else
  {
    v6 = 8;
  }
  if ( v6 )
    v6 |= 0xC0070000;
  return v6;
}
