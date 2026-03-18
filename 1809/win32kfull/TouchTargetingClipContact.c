/*
 * XREFs of TouchTargetingClipContact @ 0x1C0242F5C
 * Callers:
 *     ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1C01ED2F4 (-ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     ?_TTClip@@YAXPEAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z @ 0x1C0242904 (-_TTClip@@YAXPEAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z.c)
 */

__int64 __fastcall TouchTargetingClipContact(int *a1, int *a2, int a3, int *a4)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // r11d
  int v9; // esi
  int v10; // edi
  int v11; // r10d
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // [rsp+20h] [rbp-18h] BYREF
  int v19; // [rsp+24h] [rbp-14h]
  int v20; // [rsp+28h] [rbp-10h]
  int v21; // [rsp+2Ch] [rbp-Ch]

  result = a2[44] && !a3;
  v7 = a2[45] == 0;
  a2[44] = result;
  if ( !v7 )
  {
    if ( !a4 || (result = IntersectRect(a1, a1, a4), (_DWORD)result) )
    {
      result = IntersectRect(&v18, a1, a2);
      if ( (_DWORD)result )
      {
        v8 = a2[3];
        v9 = a2[2];
        v10 = a2[1];
        v11 = v20;
        v12 = (v8 - v10) * (v9 - v18);
        v13 = (v8 - v10) * (v20 - *a2);
        result = (unsigned int)(v9 - *a2);
        v14 = result * (v8 - v19);
        v15 = result * (v21 - v10);
        if ( v13 > v12 || v13 > v15 || v13 > v14 )
        {
          if ( v12 > v15 || v12 > v14 )
          {
            if ( v15 > v14 )
            {
              v16 = v19;
              v17 = 3;
            }
            else
            {
              v16 = v21;
              v17 = 2;
            }
          }
          else
          {
            v16 = v18;
            v17 = 1;
          }
          return _TTClip(a2, v16, v17);
        }
        else
        {
          *a2 = v20;
          if ( v11 >= v9 || v10 >= v8 )
            a2[45] = 0;
        }
      }
    }
  }
  return result;
}
