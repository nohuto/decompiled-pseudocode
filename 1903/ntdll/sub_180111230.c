/*
 * XREFs of sub_180111230 @ 0x180111230
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x18009CC20 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x18009D020 (ZwCreateSection.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1801140B8 @ 0x1801140B8 (sub_1801140B8.c)
 *     sub_1801141DC @ 0x1801141DC (sub_1801141DC.c)
 */

__int64 __fastcall sub_180111230(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  size_t v5; // rdi
  int v6; // esi
  int v7; // edi
  int v8; // eax
  size_t Size; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v10; // [rsp+B8h] [rbp+48h]

  LODWORD(Size) = 0;
  v10 = 0LL;
  result = sub_1801141DC(a2, &Size);
  if ( (int)result >= 0 )
  {
    v5 = (unsigned int)Size;
    if ( (_DWORD)Size )
    {
      result = ZwCreateSection();
      if ( (int)result >= 0 )
      {
        v6 = ZwMapViewOfSection();
        if ( v6 >= 0 )
        {
          memset(0LL, 0, v5);
          v7 = sub_1801140B8(a2, 0LL, (unsigned int)v5);
          if ( v7 >= 0 )
          {
            *(_QWORD *)(a1 + 1128) = v10;
            v8 = MEMORY[4];
            *(_DWORD *)(a1 + 4) |= 0x10u;
            *(_DWORD *)(a1 + 1136) = v8 + 8;
            ZwUnmapViewOfSection();
            return 0LL;
          }
          else
          {
            ZwUnmapViewOfSection();
            ZwClose();
            return (unsigned int)v7;
          }
        }
        else
        {
          ZwClose();
          return (unsigned int)v6;
        }
      }
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
