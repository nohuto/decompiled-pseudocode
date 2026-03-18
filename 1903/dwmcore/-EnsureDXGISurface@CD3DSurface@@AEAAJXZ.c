/*
 * XREFs of ?EnsureDXGISurface@CD3DSurface@@AEAAJXZ @ 0x1800426DC
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18003EDD4 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DSurface::EnsureDXGISurface(CD3DSurface *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, char *); // rcx
  __int64 (__fastcall *v7)(_QWORD, GUID *, char *); // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v11 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CD3DSurface *))(v1 + 32))(this) )
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2003292412, 0x362u, 0LL);
    goto LABEL_3;
  }
  if ( *((_QWORD *)this + 26) )
    goto LABEL_3;
  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 16);
  v7 = **v6;
  if ( *((_DWORD *)this + 38) == 1 )
  {
    v8 = v7(v6, &GUID_4ae63092_6327_4c1b_80ae_bfe12ea32b86, (char *)this + 208);
    v2 = v8;
    if ( v8 >= 0 )
      goto LABEL_3;
    v10 = 873;
  }
  else
  {
    v8 = v7(v6, &GUID_30961379_4609_4a41_998e_54fe567ee0c1, (char *)&v11);
    v2 = v8;
    if ( v8 < 0 )
    {
      v10 = 881;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 96LL))(
             v11,
             *((unsigned int *)this + 34),
             &v12);
      v2 = v8;
      if ( v8 >= 0 )
      {
        *((_QWORD *)this + 26) = v12;
        goto LABEL_3;
      }
      v10 = 884;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v10, 0LL);
LABEL_3:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v2;
}
