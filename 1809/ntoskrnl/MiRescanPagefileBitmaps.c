/*
 * XREFs of MiRescanPagefileBitmaps @ 0x14018804C
 * Callers:
 *     MiFindFreePageFileSpace @ 0x14012411C (MiFindFreePageFileSpace.c)
 * Callees:
 *     MiRescanPageFileBitmapPortion @ 0x1401208EC (MiRescanPageFileBitmapPortion.c)
 *     RtlFindNextClearRunUlong @ 0x140120B48 (RtlFindNextClearRunUlong.c)
 *     MiInitializePagefileBitmapsCache @ 0x140188204 (MiInitializePagefileBitmapsCache.c)
 */

__int64 __fastcall MiRescanPagefileBitmaps(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rsi
  int v4; // edi
  unsigned int v5; // ebp
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  MiInitializePagefileBitmapsCache();
  v3 = *(_QWORD *)(a1 + 176);
  v4 = 0;
  v8 = *(_DWORD *)a1;
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 112);
  v11 = v3;
  v9 = *(_QWORD *)(v6 + 32);
  while ( 1 )
  {
    result = RtlFindNextClearRunUlong(&v8, v5, v2, 0xFFFFFFFF, &v10);
    if ( !(_DWORD)result )
      break;
    v2 = v10;
    v5 = v10 + result;
    if ( (unsigned int)result > *(_DWORD *)(v3 + 52) )
    {
      MiRescanPageFileBitmapPortion(a1, *(_QWORD *)(a1 + 112) + 8LL, v10, result, &v11);
      v3 = v11;
    }
  }
  if ( *(_QWORD *)(a1 + 176) == a1 + 176 )
    v4 = *(_DWORD *)(v3 + 52);
  *(_DWORD *)(a1 + 140) = v4;
  return result;
}
