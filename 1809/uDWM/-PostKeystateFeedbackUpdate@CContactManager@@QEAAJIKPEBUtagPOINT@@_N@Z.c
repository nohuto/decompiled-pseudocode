/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x1800940A8
 * Callers:
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180099A98 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180099CBC (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z @ 0x180079568 (-PostEventMessage@CDesktopManager@@QEAAJI_K_J@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        unsigned int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  LPARAM v5; // rdi
  __int64 v6; // r10
  unsigned int v7; // edx
  __int64 v8; // rbx
  struct tagPOINT v9; // rax
  char *v10; // r10
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rdx
  WPARAM v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-18h]

  v5 = a2;
  v6 = 0LL;
  v7 = *((_DWORD *)this + 60);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 27);
    while ( *(_DWORD *)(v8 + 40 * v6) != (_DWORD)v5 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_5;
    }
    if ( (int)v6 >= 0 )
    {
      v13 = 5 * v6;
      *(_QWORD *)(v8 + 8 * v13 + 20) = *(_QWORD *)(v8 + 40 * v6 + 8);
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 16) = *(_DWORD *)(*((_QWORD *)this + 27) + 40 * v6 + 4);
      *(struct tagPOINT *)(*((_QWORD *)this + 27) + 8 * v13 + 8) = *a4;
      *(_DWORD *)(*((_QWORD *)this + 27) + 8 * v13 + 4) = a3;
      v14 = a5;
LABEL_15:
      CDesktopManager::PostEventMessage((HANDLE *)CDesktopManager::s_pDesktopManagerInstance, 0x408u, v14, v5);
      return 0LL;
    }
  }
LABEL_5:
  if ( a5 )
  {
    v9 = *a4;
    v10 = (char *)this + 216;
    v21 = 0LL;
    *((struct tagPOINT *)&v19 + 1) = v9;
    *(struct tagPOINT *)((char *)&v20 + 4) = v9;
    v11 = *((unsigned int *)this + 60);
    *(_QWORD *)&v19 = __PAIR64__(a3, v5);
    LODWORD(v20) = a3;
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
    {
      if ( v12 > *((_DWORD *)this + 59) )
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 216, 0x28u, 1, &v19);
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xC0u);
      }
      else
      {
        v15 = 5 * v11;
        v16 = *(_QWORD *)v10;
        *(_OWORD *)(v16 + 8 * v15) = v19;
        *(_OWORD *)(v16 + 8 * v15 + 16) = v20;
        *(_QWORD *)(v16 + 8 * v15 + 32) = v21;
        *((_DWORD *)v10 + 6) = v12;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, (int)v11 + 1 < (unsigned int)v11 ? 0x80070216 : 0, 0xB5u);
    }
    v14 = a5;
    goto LABEL_15;
  }
  return 0LL;
}
