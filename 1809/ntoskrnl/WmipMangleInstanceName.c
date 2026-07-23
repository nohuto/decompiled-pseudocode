/*
 * XREFs of WmipMangleInstanceName @ 0x1407096A0
 * Callers:
 *     WmipBuildInstanceSet @ 0x140708B88 (WmipBuildInstanceSet.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipFindGEByGuid @ 0x1406137A0 (WmipFindGEByGuid.c)
 *     WmipFindISinGEbyName @ 0x140709798 (WmipFindISinGEbyName.c)
 */

__int64 __fastcall WmipMangleInstanceName(_QWORD *a1, const wchar_t *a2, size_t a3, wchar_t *a4)
{
  NTSTRSAFE_PCWSTR v7; // r11
  unsigned int v8; // esi
  volatile signed __int64 *GEByGuid; // rbp
  size_t v10; // rdi
  __int16 i; // bx
  volatile signed __int64 *ISinGEbyName; // rax
  size_t v14[7]; // [rsp+20h] [rbp-38h] BYREF

  RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, v14);
  RtlStringCchCopyW(a4, a3, v7);
  v8 = 0;
  GEByGuid = WmipFindGEByGuid(a1, 0);
  if ( GEByGuid )
  {
    v10 = v14[0] - 1;
    for ( i = 90; ; a4[v10] = i )
    {
      ISinGEbyName = (volatile signed __int64 *)WmipFindISinGEbyName(GEByGuid, a4, v14);
      if ( !ISinGEbyName )
        break;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISinGEbyName);
      if ( i == 90 )
      {
        ++v10;
        i = 65;
        if ( v10 == a3 - 1 )
        {
          v8 = -1073741670;
          break;
        }
        a4[v10 + 1] = 0;
      }
      else
      {
        ++i;
      }
    }
    WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
  }
  return v8;
}
