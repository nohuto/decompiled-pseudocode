/*
 * XREFs of CheckImeHotKey @ 0x1C01044A0
 * Callers:
 *     xxxImmProcessKey @ 0x1C01042F4 (xxxImmProcessKey.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1C0104718 (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rdi
  struct _tagIMEHOTKEYOBJ *result; // rax
  char v6; // dl
  int v7; // r10d
  struct _tagIMEHOTKEYOBJ *v8; // rcx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v11; // eax
  int v12; // r9d
  bool v13; // cl

  v4 = a3 & 0x80000000;
  if ( a3 < 0 )
  {
    if ( dword_1C0317644 != a2 )
    {
      dword_1C0317644 = 0;
      return 0LL;
    }
    dword_1C0317644 = 0;
  }
  v6 = *(_BYTE *)(a1 + 268);
  v7 = ((v6 & 0x10) != 0 ? 0x8002 : 0) | ((v6 & 0x40) != 0 ? 0x4002 : 0) | ((*(_BYTE *)(a1 + 269) & 1) != 0 ? 0x8001 : 0) | ((*(_BYTE *)(a1 + 269) & 4) != 0 ? 0x4001 : 0);
  v8 = (v6 & 4) != 0 ? (struct _tagIMEHOTKEYOBJ *)0x4004 : 0LL;
  v9 = ((v6 & 1) != 0 ? 0x8004 : 0) | (unsigned int)v8 | v7;
  if ( a2 - 16 <= 2 )
  {
    v10 = (v9 & 5) + (((unsigned __int8)(v9 & 7) >> 1) & 5);
    v8 = (struct _tagIMEHOTKEYOBJ *)(v10 & 3);
    if ( (_DWORD)v8 + (v10 >> 2) == 1 )
    {
      v11 = dword_1C03177F8;
      if ( (a3 & 0x40000000) == 0 )
        v11 = v9 & 7;
      dword_1C03177F8 = v11;
    }
  }
  else
  {
    dword_1C03177F8 = 0;
  }
  result = FindImeHotKeyByKey(v8, v9 & 0xF, (unsigned __int16)v9 & 0xC000, a2);
  if ( !result )
    return 0LL;
  v12 = *((_DWORD *)result + 4);
  if ( v4 )
  {
    v13 = 0;
    if ( (v12 & 0x40801) != 0x40801 )
      v13 = (v12 & 0x20802) != 133122 && (v12 & 0x10804) != 67588;
    if ( v13 )
    {
      if ( (v12 & 0x800) == 0 )
        return 0LL;
    }
    else if ( dword_1C03177F8 != (*((_DWORD *)result + 4) & 7) )
    {
      return 0LL;
    }
    dword_1C03177F8 = 0;
    return result;
  }
  if ( (v12 & 0x800) != 0 )
  {
    dword_1C0317644 = a2;
    return 0LL;
  }
  return result;
}
