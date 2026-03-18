/*
 * XREFs of ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x180234460
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1802352DC (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 */

__int64 __fastcall CInteractionContextWrapper::GetTransformedOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        struct InteractionOutput *a3)
{
  struct InteractionOutput *v3; // rdi
  __int128 v4; // xmm0
  unsigned int v7; // r9d
  int v8; // eax
  __int128 v9; // xmm0
  const struct _TlgProvider_t *v10; // rcx
  __int64 v11; // r10
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  CInteractionContextWrapper *v14; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  CInteractionContextWrapper **v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  char *v18; // [rsp+70h] [rbp-90h]
  __int64 v19; // [rsp+78h] [rbp-88h]
  char *v20; // [rsp+80h] [rbp-80h]
  __int64 v21; // [rsp+88h] [rbp-78h]
  char *v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  char *v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  char *v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  char *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  char *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  char *v32; // [rsp+E0h] [rbp-20h]
  __int64 v33; // [rsp+E8h] [rbp-18h]
  char *v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  unsigned int *v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]

  v3 = (CInteractionContextWrapper *)((char *)this + 160);
  v4 = *((_OWORD *)this + 10);
  v13 = 0;
  v7 = 0;
  *(_OWORD *)a3 = v4;
  *((_OWORD *)a3 + 1) = *((_OWORD *)this + 11);
  *((_OWORD *)a3 + 2) = *((_OWORD *)this + 12);
  *((_QWORD *)a3 + 6) = *((_QWORD *)this + 26);
  *((_DWORD *)a3 + 14) = *((_DWORD *)this + 54);
  if ( *((_BYTE *)this + 156) )
  {
    v8 = CInteractionContextWrapper::TransformOutput(this, a2, (CInteractionContextWrapper *)((char *)this + 32), v3);
    v9 = *(_OWORD *)v3;
    *((_BYTE *)this + 156) = 0;
    v7 = v8;
    v13 = v8;
    *(_OWORD *)a3 = v9;
    *((_OWORD *)a3 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)v3 + 2);
    *((_QWORD *)a3 + 6) = *((_QWORD *)v3 + 6);
    *((_DWORD *)a3 + 14) = *((_DWORD *)v3 + 14);
    if ( dword_18033A240 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18033A240, 2uLL) )
      {
        v14 = this;
        v16 = &v14;
        v18 = (char *)this + 168;
        v20 = (char *)this + 172;
        v22 = (char *)this + 176;
        v24 = (char *)this + 184;
        v26 = (char *)this + 188;
        v28 = (char *)this + 192;
        v30 = (char *)this + 196;
        v32 = (char *)this + 200;
        v34 = (char *)this + 204;
        v36 = &v13;
        v17 = 8LL;
        v19 = v11;
        v21 = v11;
        v23 = v11;
        v25 = v11;
        v27 = v11;
        v29 = v11;
        v31 = v11;
        v33 = v11;
        v35 = v11;
        v37 = v11;
        TlgWrite(v10, &unk_1802DEF9F, 0LL, 0LL, 0xDu, &pData);
        return v13;
      }
    }
  }
  return v7;
}
