/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BD68
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800548B0 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801A98A0 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_S.c)
 * Callees:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180052EB4 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800669E4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x18018C420 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801AAA0C (--8CPathData@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(
        CBaseExpression *this,
        const struct CExpressionValue *a2,
        __int64 a3)
{
  char v4; // si
  unsigned int v6; // ecx
  char v7; // al
  struct CResource *v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // ecx
  float *v13; // r9
  char v14; // al
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  bool v19; // zf
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // al
  unsigned __int64 v24; // rcx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int TracingCookie; // eax
  int v32; // eax
  unsigned int v33; // ecx
  HANDLE EventW; // rbx
  int v35; // r9d
  unsigned int v36; // [rsp+20h] [rbp-A8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-98h] BYREF

  v4 = 0;
  if ( *(int *)(*((_QWORD *)this + 35) + 4LL) < 0 )
  {
    v12 = *((_DWORD *)this + 34);
    v13 = (float *)((char *)this + 64);
    if ( v12 != *((_DWORD *)a2 + 18) )
      goto LABEL_57;
    v14 = *((_BYTE *)this + 140);
    if ( v14 != *((_BYTE *)a2 + 76) )
      goto LABEL_57;
    if ( v14 )
    {
      if ( v12 <= 52 )
      {
        if ( v12 == 52 )
        {
          v24 = *(_QWORD *)v13 - *(_QWORD *)a2;
          if ( *(_QWORD *)v13 == *(_QWORD *)a2 )
            v24 = *((unsigned int *)this + 18) - (unsigned __int64)*((unsigned int *)a2 + 2);
          v20 = v24 == 0;
        }
        else
        {
          v15 = v12 - 11;
          if ( v15 )
          {
            v16 = v15 - 6;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( !v17 )
              {
LABEL_22:
                v19 = *v13 == *(float *)a2;
                goto LABEL_24;
              }
              v18 = v17 - 17;
              if ( v18 )
              {
                if ( v18 != 7 )
                  goto LABEL_57;
                goto LABEL_22;
              }
              v20 = *(_QWORD *)v13 == *(_QWORD *)a2;
            }
            else
            {
              v20 = *(_BYTE *)v13 == *(_BYTE *)a2;
            }
          }
          else
          {
            v21 = *((_QWORD *)this + 16);
            if ( v21 )
            {
              v22 = *((_QWORD *)a2 + 8);
              if ( v22 )
              {
                v23 = CPathData::operator==(*((_QWORD *)this + 16), v22, a3, v13);
                goto LABEL_56;
              }
            }
            v20 = v21 == *((_QWORD *)a2 + 8);
          }
        }
        goto LABEL_54;
      }
      v25 = v12 - 69;
      if ( !v25 )
      {
        v30 = *(_QWORD *)v13 - *(_QWORD *)a2;
        if ( *(_QWORD *)v13 == *(_QWORD *)a2 )
          v30 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
        v20 = v30 == 0;
LABEL_54:
        v23 = v20;
        goto LABEL_56;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
        v29 = *(_QWORD *)v13 - *(_QWORD *)a2;
        if ( *(_QWORD *)v13 == *(_QWORD *)a2 )
          v29 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
LABEL_23:
        v19 = v29 == 0;
LABEL_24:
        if ( v19 )
          goto LABEL_2;
LABEL_57:
        v4 = 1;
        goto LABEL_2;
      }
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 33;
        if ( v28 )
        {
          if ( v28 != 161 )
            goto LABEL_57;
          v19 = memcmp_0((char *)this + 64, a2, 0x40uLL) == 0;
          goto LABEL_24;
        }
        v29 = *(_QWORD *)v13 - *(_QWORD *)a2;
        if ( *(_QWORD *)v13 == *(_QWORD *)a2 )
        {
          v29 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
          if ( !v29 )
            v29 = *((_QWORD *)this + 10) - *((_QWORD *)a2 + 2);
        }
        goto LABEL_23;
      }
      if ( *v13 != *(float *)a2
        || *((float *)this + 17) != *((float *)a2 + 1)
        || *((float *)this + 18) != *((float *)a2 + 2)
        || *((float *)this + 19) != *((float *)a2 + 3) )
      {
        v23 = 0;
        goto LABEL_56;
      }
    }
    v23 = 1;
LABEL_56:
    if ( v23 )
      goto LABEL_2;
    goto LABEL_57;
  }
LABEL_2:
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
  if ( v4 )
  {
    CBaseExpression::LogSetOutputValue(this);
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    v32 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
    v10 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1C8u);
      return v10;
    }
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
  }
  v7 = *((_BYTE *)this + 208);
  if ( (v7 & 2) != 0 && (v7 & 1) != 0 )
  {
    v8 = (struct CResource *)*((_QWORD *)this + 22);
    if ( v8 )
      v8 = (struct CResource *)*((_QWORD *)v8 + 2);
    if ( v8 )
    {
      v9 = CBaseExpression::SetOutputValueOnTarget(this, v8);
      v10 = v9;
      if ( v9 >= 0 )
        return 0;
      v36 = 474;
      v35 = v9;
    }
    else
    {
      v10 = -2147024890;
      v36 = 473;
      v35 = -2147024890;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v35, v36);
    return v10;
  }
  return 0;
}
