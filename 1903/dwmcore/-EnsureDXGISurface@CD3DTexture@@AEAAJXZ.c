/*
 * XREFs of ?EnsureDXGISurface@CD3DTexture@@AEAAJXZ @ 0x180023BD8
 * Callers:
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180023C6C (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::EnsureDXGISurface(CD3DTexture *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall *v6)(_QWORD, GUID *, char *); // rax
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v11 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DTexture *))(v1 + 32))(this) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0x278u, 0LL);
    goto LABEL_5;
  }
  if ( *((_QWORD *)this + 26) )
    goto LABEL_5;
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 15);
  v6 = **v5;
  if ( *((_DWORD *)this + 35) == 1 )
  {
    v7 = v6(v5, &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec, (char *)this + 208);
    v2 = v7;
    if ( v7 >= 0 )
      goto LABEL_5;
    v10 = 640;
  }
  else
  {
    v7 = v6(v5, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v11);
    v2 = v7;
    if ( v7 < 0 )
    {
      v10 = 651;
    }
    else
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 96LL))(
             v11,
             *((unsigned int *)this + 43),
             &v12);
      v2 = v7;
      if ( v7 >= 0 )
      {
        *((_QWORD *)this + 26) = v12;
        goto LABEL_5;
      }
      v10 = 654;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v10, 0LL);
LABEL_5:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v2;
}
