/*
 * XREFs of ?BuildRequestForPointerInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAUPointerInputInfo@@KPEAUHMONITOR__@@@Z @ 0x1800C7C34
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z @ 0x1800C3EE0 (-HitTest@DWMInputRouter@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAPEAU4@@Z.c)
 * Callees:
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@CA?BHW4InputType@@@Z @ 0x1800C7D14 (-ConvertInputTypeToPointerType@HitTestHelper@@CA-BHW4InputType@@@Z.c)
 */

_DWORD *__fastcall HitTestHelper::BuildRequestForPointerInputInfo(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v4; // rbp
  int v8; // eax
  __int16 v9; // r8
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax

  v4 = a3;
  memset_0(a1, 0, 0x90uLL);
  v8 = HitTestHelper::ConvertInputTypeToPointerType(*a2);
  *a1 = v8;
  *((_QWORD *)a1 + 1) = a4;
  if ( v8 == 4 )
  {
    v9 = *((_WORD *)a2 + 102);
    v10 = 0;
    if ( (v9 & 0xC00) != 0 )
    {
      v10 = (((*((__int16 *)a2 + 103) >> 31) & 0xFFFFFFFE) + 3) | 4;
      if ( (v9 & 0x800) == 0 )
        v10 = ((*((__int16 *)a2 + 103) >> 31) & 0xFFFFFFFE) + 3;
    }
    v11 = v10 | 8;
    if ( (v9 & 1) == 0 )
      v11 = v10;
    v12 = v11 | 0x20;
    if ( !*((_BYTE *)a2 + 208) )
      v12 = v11;
    a1[31] = v12;
  }
  *((_QWORD *)a1 + 2) = *(_QWORD *)&a2[36 * v4 + 66];
  a1[32] = a2[10];
  return a1;
}
