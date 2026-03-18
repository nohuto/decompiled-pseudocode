/*
 * XREFs of ?AddWindowNode@CGdiSpriteBitmap@@UEAAJPEAVCWindowNode@@@Z @ 0x1800D3960
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddWindowNode(CGdiSpriteBitmap *this, struct CWindowNode *a2)
{
  char *v2; // r10
  unsigned int v3; // ebx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  __int64 v7; // rcx
  struct CWindowNode **v9; // rcx
  signed int v10; // eax
  __int64 v11; // rcx
  struct CWindowNode *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 112;
  v3 = 0;
  v4 = *((unsigned int *)this + 34);
  v5 = 0;
  v6 = *((_QWORD *)this + 14);
  if ( (_DWORD)v4 )
  {
    v9 = (struct CWindowNode **)*((_QWORD *)this + 14);
    while ( a2 != *v9 )
    {
      ++v5;
      ++v9;
      if ( v5 >= (unsigned int)v4 )
        goto LABEL_2;
    }
  }
  else
  {
LABEL_2:
    v7 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v7 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else
    {
      if ( (unsigned int)v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = v12;
        *((_DWORD *)v2 + 6) = v7;
        return v3;
      }
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v12);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, 0xC5u, 0LL);
  }
  return v3;
}
