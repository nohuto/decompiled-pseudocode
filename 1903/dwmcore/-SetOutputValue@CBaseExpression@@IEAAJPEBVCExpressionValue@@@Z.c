/*
 * XREFs of ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E7F78
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180081A30 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800C0230 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSI.c)
 *     ?ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1801E6580 (-ProcessSetBindingBroken@CNaturalAnimation@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSIO.c)
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180099900 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A76D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800C7190 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800EC53F (memcmp_0.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801C1AB8 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x1801E73B4 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 */

__int64 __fastcall CBaseExpression::SetOutputValue(CBaseExpression *this, const struct CExpressionValue *a2)
{
  char v3; // si
  float *v5; // r9
  int v6; // ecx
  char v7; // al
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // al
  unsigned __int64 v17; // rcx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int TracingCookie; // eax
  int v26; // eax
  unsigned int v27; // ebx
  HANDLE EventW; // rbx
  char v29; // al
  struct CResource *v30; // rdx
  unsigned int v31; // r9d
  int v32; // eax
  unsigned int v34; // [rsp+20h] [rbp-A8h]
  WCHAR Name[64]; // [rsp+30h] [rbp-98h] BYREF

  v3 = 0;
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
  {
    v5 = (float *)((char *)this + 64);
    v6 = *((_DWORD *)this + 34);
    if ( v6 != *((_DWORD *)a2 + 18) )
      goto LABEL_47;
    v7 = *((_BYTE *)this + 140);
    if ( v7 != *((_BYTE *)a2 + 76) )
      goto LABEL_47;
    if ( v7 )
    {
      if ( v6 <= 52 )
      {
        if ( v6 == 52 )
        {
          v17 = *(_QWORD *)v5 - *(_QWORD *)a2;
          if ( *(_QWORD *)v5 == *(_QWORD *)a2 )
            v17 = *((unsigned int *)this + 18) - (unsigned __int64)*((unsigned int *)a2 + 2);
          v13 = v17 == 0;
        }
        else
        {
          v8 = v6 - 11;
          if ( v8 )
          {
            v9 = v8 - 6;
            if ( v9 )
            {
              v10 = v9 - 1;
              if ( !v10 )
              {
LABEL_12:
                v12 = *v5 == *(float *)a2;
                goto LABEL_13;
              }
              v11 = v10 - 17;
              if ( v11 )
              {
                if ( v11 != 7 )
                  goto LABEL_47;
                goto LABEL_12;
              }
              v13 = *(_QWORD *)v5 == *(_QWORD *)a2;
            }
            else
            {
              v13 = *(_BYTE *)v5 == *(_BYTE *)a2;
            }
          }
          else
          {
            v14 = *((_QWORD *)this + 16);
            if ( v14 )
            {
              v15 = *((_QWORD *)a2 + 8);
              if ( v15 )
              {
                v16 = CPathData::operator==(*((_QWORD *)v5 + 8), v15);
                goto LABEL_46;
              }
            }
            v13 = v14 == *((_QWORD *)a2 + 8);
          }
        }
        goto LABEL_44;
      }
      v18 = v6 - 69;
      if ( !v18 )
      {
        v23 = *(_QWORD *)v5 - *(_QWORD *)a2;
        if ( *(_QWORD *)v5 == *(_QWORD *)a2 )
          v23 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
        v13 = v23 == 0;
LABEL_44:
        v16 = v13;
        goto LABEL_46;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v22 = *(_QWORD *)v5 - *(_QWORD *)a2;
        if ( *(_QWORD *)v5 == *(_QWORD *)a2 )
          v22 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
LABEL_33:
        v12 = v22 == 0;
LABEL_13:
        if ( v12 )
          goto LABEL_48;
LABEL_47:
        v3 = 1;
        goto LABEL_48;
      }
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 33;
        if ( v21 )
        {
          if ( v21 != 161 )
            goto LABEL_47;
          v12 = memcmp_0((char *)this + 64, a2, 0x40uLL) == 0;
          goto LABEL_13;
        }
        v22 = *(_QWORD *)v5 - *(_QWORD *)a2;
        if ( *(_QWORD *)v5 == *(_QWORD *)a2 )
        {
          v22 = *((_QWORD *)this + 9) - *((_QWORD *)a2 + 1);
          if ( !v22 )
            v22 = *((_QWORD *)this + 10) - *((_QWORD *)a2 + 2);
        }
        goto LABEL_33;
      }
      if ( *v5 != *(float *)a2
        || *((float *)this + 17) != *((float *)a2 + 1)
        || *((float *)this + 18) != *((float *)a2 + 2)
        || *((float *)this + 19) != *((float *)a2 + 3) )
      {
        v16 = 0;
        goto LABEL_46;
      }
    }
    v16 = 1;
LABEL_46:
    if ( v16 )
      goto LABEL_48;
    goto LABEL_47;
  }
LABEL_48:
  CExpressionValue::CopyFrom((CBaseExpression *)((char *)this + 64), a2);
  if ( !v3 )
  {
LABEL_51:
    v29 = *((_BYTE *)this + 208);
    if ( (v29 & 2) != 0 && (v29 & 1) != 0 )
    {
      v30 = (struct CResource *)*((_QWORD *)this + 22);
      if ( v30 )
        v30 = (struct CResource *)*((_QWORD *)v30 + 2);
      if ( !v30 )
      {
        v27 = -2147024890;
        v31 = -2147024890;
        v34 = 507;
        goto LABEL_56;
      }
      v32 = CBaseExpression::SetOutputValueOnTarget(this, v30);
      v27 = v32;
      if ( v32 < 0 )
      {
        v31 = v32;
        v34 = 508;
        goto LABEL_56;
      }
    }
    return 0;
  }
  CBaseExpression::LogSetOutputValue(this);
  TracingCookie = CBaseExpression::GetTracingCookie(this);
  v26 = StringCchPrintfW(Name, 0x3CuLL, (size_t *)L"DwmExpression_SetValue_%d", TracingCookie);
  v27 = v26;
  if ( v26 >= 0 )
  {
    EventW = CreateEventW(0LL, 1, 0, Name);
    SetEvent(EventW);
    CloseHandle(EventW);
    goto LABEL_51;
  }
  v31 = v26;
  v34 = 490;
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v31, v34, 0LL);
  return v27;
}
