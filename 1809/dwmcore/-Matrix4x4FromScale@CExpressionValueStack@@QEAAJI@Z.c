/*
 * XREFs of ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801D0EE4
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800BDCA0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180051898 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180053818 (--1CExpressionValue@@QEAA@XZ.c)
 *     ??4CExpressionValue@@QEAAAEAV0@AEBV0@@Z @ 0x180055584 (--4CExpressionValue@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x1802196CC (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x18021973C (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z.c)
 *     ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z @ 0x1802197A4 (-D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@UD2DVector3@@1@Z.c)
 */

__int64 __fastcall CExpressionValueStack::Matrix4x4FromScale(CExpressionValueStack *this, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CExpressionValue *v6; // rax
  unsigned int *v7; // rbx
  unsigned int v8; // xmm1_4
  __int128 v9; // xmm0
  __int64 v11; // xmm0_8
  unsigned int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rax
  _DWORD *v18; // rbx
  CExpressionValue *v19; // rax
  _DWORD *v20; // rsi
  CExpressionValue *v21; // rax
  unsigned int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27; // eax
  __int64 v28; // xmm0_8
  int v29; // eax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  char v34; // al
  unsigned int v35; // edx
  __int64 v36; // rax
  int *v37; // rbx
  CExpressionValue *v38; // rax
  unsigned int *v39; // rsi
  __int64 v40; // rax
  CExpressionValue *v41; // rax
  int *v42; // r15
  CExpressionValue *v43; // rax
  unsigned int v44; // xmm0_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  unsigned int v49; // edx
  __int64 v50; // rax
  _DWORD *v51; // rbx
  CExpressionValue *v52; // rax
  __int64 v53; // rax
  CExpressionValue *v54; // rax
  _DWORD *v55; // r12
  __int64 v56; // rax
  CExpressionValue *v57; // rax
  _DWORD *v58; // r15
  CExpressionValue *v59; // rax
  __int64 v60; // xmm0_8
  unsigned int v61; // [rsp+28h] [rbp-49h]
  __int64 v62; // [rsp+38h] [rbp-39h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-31h]
  __int64 v64; // [rsp+48h] [rbp-29h] BYREF
  int v65; // [rsp+50h] [rbp-21h]
  __int128 v66; // [rsp+58h] [rbp-19h] BYREF
  __int128 v67; // [rsp+68h] [rbp-9h]
  __int128 v68; // [rsp+78h] [rbp+7h]
  __int128 v69; // [rsp+88h] [rbp+17h]

  v4 = *((unsigned int *)this + 4);
  if ( (unsigned int)v4 >= a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < *((_DWORD *)this + 12) )
        {
          v7 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v6 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          v7 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v6);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
        }
        if ( v7[18] == 18 )
        {
          v8 = *v7;
          LODWORD(v67) = 0;
          *((_QWORD *)&v67 + 1) = 0LL;
          *(_QWORD *)&v68 = 0LL;
          HIDWORD(v68) = 0;
          v66 = v8;
          *(_OWORD *)v7 = v8;
          v7[18] = 265;
          DWORD2(v68) = v8;
          v9 = v68;
          DWORD1(v67) = v8;
          *((_OWORD *)v7 + 1) = v67;
          *((_BYTE *)v7 + 76) = 1;
          *((_OWORD *)v7 + 2) = v9;
          *((_OWORD *)v7 + 3) = _xmm;
LABEL_10:
          v5 = 0;
          goto LABEL_11;
        }
        if ( v7[18] == 52 )
        {
          v11 = *(_QWORD *)v7;
          v12 = v7[2];
          *(_QWORD *)((char *)&v69 + 4) = 0LL;
          LODWORD(v69) = 0;
          *(_QWORD *)&v68 = 0LL;
          *((_QWORD *)&v67 + 1) = 0LL;
          LODWORD(v67) = 0;
          v62 = v11;
          v66 = (unsigned int)v11;
          DWORD1(v67) = HIDWORD(v11);
          *((float *)&v69 + 3) = FLOAT_1_0;
          v13 = (unsigned __int64)v67;
          v63 = v12;
          *((_QWORD *)&v68 + 1) = v12;
          *(_OWORD *)v7 = (unsigned int)v11;
          v7[18] = 265;
          v14 = v68;
          *((_OWORD *)v7 + 1) = v13;
          *((_BYTE *)v7 + 76) = 1;
          v15 = v69;
          *((_OWORD *)v7 + 2) = v14;
          *((_OWORD *)v7 + 3) = v15;
LABEL_29:
          v34 = 1;
          goto LABEL_63;
        }
        break;
      case 2u:
        v16 = *((unsigned int *)this + 12);
        v17 = (unsigned int)(v4 - 2);
        v18 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v17 < (unsigned int)v16 )
        {
          v20 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v17);
        }
        else
        {
          v19 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v19);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v20 = &CExpressionValueStack::s_emptyValue;
          v16 = *((unsigned int *)this + 12);
        }
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < (unsigned int)v16 )
        {
          v18 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v21 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v21);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
        }
        if ( v20[18] == 18 && v18[18] == 52 )
        {
          v22 = v18[2];
          v62 = *(_QWORD *)v18;
          v63 = v22;
          D2DMatrixScaling(&v66, v16, &v62);
          v23 = v66;
          v24 = v67;
          v20[18] = 265;
          *(_OWORD *)v20 = v23;
          *((_BYTE *)v20 + 76) = 1;
          v25 = v68;
          *((_OWORD *)v20 + 1) = v24;
          v26 = v69;
          *((_OWORD *)v20 + 2) = v25;
          *((_OWORD *)v20 + 3) = v26;
          goto LABEL_10;
        }
        if ( v20[18] == 52 && v18[18] == 52 )
        {
          v27 = v18[2];
          v62 = *(_QWORD *)v18;
          v28 = *(_QWORD *)v20;
          v63 = v27;
          v29 = v20[2];
          v64 = v28;
          v65 = v29;
          D2DMatrixScaling(&v66, &v64, &v62);
LABEL_28:
          v30 = v66;
          v31 = v67;
          v20[18] = 265;
          *(_OWORD *)v20 = v30;
          v32 = v68;
          *((_OWORD *)v20 + 1) = v31;
          v33 = v69;
          *((_OWORD *)v20 + 2) = v32;
          *((_OWORD *)v20 + 3) = v33;
          *((_BYTE *)v20 + 76) = 1;
          goto LABEL_29;
        }
        break;
      case 3u:
        v35 = *((_DWORD *)this + 12);
        v36 = (unsigned int)(v4 - 3);
        v37 = (int *)&CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v36 < v35 )
        {
          v39 = (unsigned int *)(*((_QWORD *)this + 3) + 80 * v36);
        }
        else
        {
          v38 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v38);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v39 = (unsigned int *)&CExpressionValueStack::s_emptyValue;
          v35 = *((_DWORD *)this + 12);
        }
        v40 = (unsigned int)(v4 - 2);
        if ( (unsigned int)v40 < v35 )
        {
          v42 = (int *)(*((_QWORD *)this + 3) + 80 * v40);
        }
        else
        {
          v41 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v41);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v42 = (int *)&CExpressionValueStack::s_emptyValue;
          v35 = *((_DWORD *)this + 12);
        }
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < v35 )
        {
          v37 = (int *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v43 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v43);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
        }
        if ( v39[18] == 18 && v42[18] == 18 && v37[18] == 18 )
        {
          v44 = *v39;
          v34 = 1;
          v45 = *v42;
          *(_QWORD *)((char *)&v69 + 4) = 0LL;
          LODWORD(v69) = 0;
          HIDWORD(v68) = 0;
          *(_QWORD *)&v68 = 0LL;
          *((_QWORD *)&v67 + 1) = 0LL;
          LODWORD(v67) = 0;
          v66 = v44;
          v46 = *v37;
          v39[18] = 265;
          DWORD1(v67) = v45;
          DWORD2(v68) = v46;
          *(_OWORD *)v39 = v66;
          *((_BYTE *)v39 + 76) = 1;
          v47 = v68;
          *((float *)&v69 + 3) = FLOAT_1_0;
          *((_OWORD *)v39 + 1) = v67;
          v48 = v69;
          *((_OWORD *)v39 + 2) = v47;
          *((_OWORD *)v39 + 3) = v48;
          goto LABEL_63;
        }
        break;
      case 4u:
        v49 = *((_DWORD *)this + 12);
        v50 = (unsigned int)(v4 - 4);
        v51 = &CExpressionValueStack::s_emptyValue;
        if ( (unsigned int)v50 < v49 )
        {
          v20 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v50);
        }
        else
        {
          v52 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v52);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v20 = &CExpressionValueStack::s_emptyValue;
          v49 = *((_DWORD *)this + 12);
        }
        v53 = (unsigned int)(v4 - 3);
        if ( (unsigned int)v53 < v49 )
        {
          v55 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v53);
        }
        else
        {
          v54 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v54);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v55 = &CExpressionValueStack::s_emptyValue;
          v49 = *((_DWORD *)this + 12);
        }
        v56 = (unsigned int)(v4 - 2);
        if ( (unsigned int)v56 < v49 )
        {
          v58 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v56);
        }
        else
        {
          v57 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v57);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
          LODWORD(v4) = *((_DWORD *)this + 4);
          v58 = &CExpressionValueStack::s_emptyValue;
          v49 = *((_DWORD *)this + 12);
        }
        v4 = (unsigned int)(v4 - 1);
        if ( (unsigned int)v4 < v49 )
        {
          v51 = (_DWORD *)(*((_QWORD *)this + 3) + 80 * v4);
        }
        else
        {
          v59 = CExpressionValue::CExpressionValue((CExpressionValue *)&v66);
          CExpressionValue::operator=((__int64)&CExpressionValueStack::s_emptyValue, (__int64)v59);
          CExpressionValue::~CExpressionValue((CExpressionValue *)&v66);
        }
        if ( v20[18] == 18 && v55[18] == 18 && v58[18] == 18 && v51[18] == 52 )
        {
          v60 = *(_QWORD *)v51;
          v65 = v51[2];
          v64 = v60;
          D2DMatrixScaling(&v66);
          goto LABEL_28;
        }
        break;
    }
    v34 = 0;
LABEL_63:
    v5 = 0;
    if ( !v34 )
    {
      v61 = 6326;
      goto LABEL_3;
    }
LABEL_11:
    *((_DWORD *)this + 4) += 1 - a2;
    return v5;
  }
  v61 = 6199;
LABEL_3:
  v5 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(
    v4,
    &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
    1u,
    -2147467259,
    v61);
  return v5;
}
