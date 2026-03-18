/*
 * XREFs of ?DrawMesh2D@COcclusionContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180170970
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawMesh2D(
        COcclusionContext *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  signed int v10; // eax
  __int64 v11; // rcx
  __int128 v13; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+40h] [rbp-28h]
  __int64 v15; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(*((_QWORD *)a3 + 2) + 48LL))((char *)a3 + 16, 15LL) )
  {
    *(_QWORD *)&v13 = *((_QWORD *)this + 102);
    v6 = *((unsigned int *)this + 296);
    *((_QWORD *)&v13 + 1) = a3;
    LOBYTE(v14) = 1;
    v7 = v6 + 1;
    if ( (int)v6 + 1 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    else if ( v7 > *((_DWORD *)this + 295) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1160, 40, 1, &v13);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
    }
    else
    {
      v8 = 5 * v6;
      v9 = *((_QWORD *)this + 145);
      *(_OWORD *)(v9 + 8 * v8) = v13;
      *(_OWORD *)(v9 + 8 * v8 + 16) = v14;
      *(_QWORD *)(v9 + 8 * v8 + 32) = v15;
      *((_DWORD *)this + 296) = v7;
    }
  }
  return 0LL;
}
