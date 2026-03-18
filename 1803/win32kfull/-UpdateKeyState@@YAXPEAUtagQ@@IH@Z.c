/*
 * XREFs of ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C000F9E8
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UpdateKeyState(struct tagQ *a1, unsigned int a2, int a3)
{
  unsigned __int64 v5; // rcx
  char v6; // dl
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r10
  int v10; // ebx
  int v11; // edx
  unsigned int v12; // eax
  int v13; // edx

  if ( a3 )
  {
    v9 = (unsigned __int64)(unsigned __int8)a2 >> 2;
    v10 = a2 & 3;
    v11 = *((unsigned __int8 *)a1 + v9 + 228);
    if ( !_bittest(&v11, (unsigned __int8)(2 * v10)) )
    {
      v12 = 2 * v10 + 1;
      if ( _bittest(&v11, v12) )
        v13 = v11 & ~(1 << v12);
      else
        v13 = v11 | (1 << v12);
      *((_BYTE *)a1 + v9 + 228) = v13;
    }
  }
  v5 = (unsigned __int64)(unsigned __int8)a2 >> 2;
  v6 = 2 * (a2 & 3);
  v7 = *((unsigned __int8 *)a1 + v5 + 228);
  if ( a3 )
    v8 = v7 | (1 << v6);
  else
    v8 = v7 & ~(1 << v6);
  *((_BYTE *)a1 + v5 + 228) = v8;
  if ( a2 < 0x20 )
    ++*(_DWORD *)(gpsi + 6984LL);
}
