/*
 * XREFs of ?Initialize@CDesktopThumbnailBase@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800AB1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::Initialize(CDesktopThumbnailBase *this, struct IDwmChannel *a2)
{
  int v3; // eax
  int v4; // ebx
  CDesktopManager *v5; // r10
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // eax
  CDesktopThumbnailBase *v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = CDesktopManager::s_pDesktopManagerInstance;
    v10 = this;
    v6 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 194);
    v7 = v6 + 1;
    v4 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 >= v6 )
    {
      if ( v7 > *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 193) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet((__int64)CDesktopManager::s_pDesktopManagerInstance + 752, 8u, 1, &v10);
        v4 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 94)
                  + 8LL * *((unsigned int *)CDesktopManager::s_pDesktopManagerInstance + 194)) = v10;
        *((_DWORD *)v5 + 194) = v7;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xB5u);
    }
    if ( v4 >= 0 )
      *((_BYTE *)this + 84) |= 8u;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x2Bu);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x2Au);
  }
  return (unsigned int)v4;
}
