/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18003A288
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180021D48 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned int v7; // r8d
  struct CWindowData **v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  void *v13; // [rsp+28h] [rbp-10h]
  struct CWindowData *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (char *)this + 248;
  v3 = 0;
  v4 = *((unsigned int *)this + 68);
  v6 = *((_QWORD *)this + 31);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = (struct CWindowData **)*((_QWORD *)this + 31);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v4 );
  }
  if ( v7 >= *((_DWORD *)this + 68) )
  {
    v9 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v13);
    }
    else
    {
      v10 = 0;
      if ( v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = v14;
        *((_DWORD *)v2 + 6) = v9;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v14);
        v10 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, v13);
      }
    }
    return v10;
  }
  return v3;
}
