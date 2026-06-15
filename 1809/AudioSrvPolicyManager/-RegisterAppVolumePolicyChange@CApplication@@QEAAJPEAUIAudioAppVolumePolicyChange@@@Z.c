/*
 * XREFs of ?RegisterAppVolumePolicyChange@CApplication@@QEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180013DF0
 * Callers:
 *     ?RegisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z @ 0x180017BC0 (-RegisterAppVolumePolicyChange@CProcess@@UEAAJPEAUIAudioAppVolumePolicyChange@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001094C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::RegisterAppVolumePolicyChange(
        CApplication *this,
        struct IAudioAppVolumePolicyChange *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // r14
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r8
  int v9; // edx
  _QWORD *i; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v15; // rbp
  _DWORD *v16; // rbx
  _QWORD *v17; // rdx
  _QWORD v18[5]; // [rsp+0h] [rbp-48h] BYREF
  ATL::CAtlException *v19; // [rsp+28h] [rbp-20h] BYREF
  __int64 v20; // [rsp+50h] [rbp+8h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+60h] [rbp+18h]

  v18[4] = -2LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = 0;
  v6 = *((_QWORD *)this + 15);
  if ( !*((_QWORD *)this + 19) )
  {
    v7 = *((unsigned int *)this + 40);
    if ( *((_DWORD *)this + 40) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x18 )
      {
        v8 = 0LL;
        goto LABEL_8;
      }
      v7 *= 24LL;
    }
    v8 = malloc(v7 + 8);
    if ( !v8 )
      goto LABEL_25;
    while ( 1 )
    {
      *v8 = *((_QWORD *)this + 18);
      *((_QWORD *)this + 18) = v8;
LABEL_8:
      if ( v8 )
        break;
LABEL_25:
      try
      {
        ATL::AtlThrowImpl(-2147024882);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v17 = v18;
        v15 = v17;
        v16 = (_DWORD *)v17[5];
        if ( *v16 == -1073741571 )
          _o__resetstkoflw();
        *((_DWORD *)v15 + 20) = *v16;
        v5 = v20;
        v4 = v21;
        goto LABEL_16;
      }
    }
    v9 = *((_DWORD *)this + 40);
    for ( i = &v8[2 * (v9 - 1) + 1 + (unsigned int)(v9 - 1)]; --v9 >= 0; i -= 3 )
    {
      *i = *((_QWORD *)this + 19);
      *((_QWORD *)this + 19) = i;
    }
  }
  v11 = (__int64 *)*((_QWORD *)this + 19);
  v12 = *v11;
  v11[2] = (__int64)a2;
  *((_QWORD *)this + 19) = v12;
  v11[1] = 0LL;
  *v11 = v6;
  ++*((_QWORD *)this + 17);
  v13 = *((_QWORD *)this + 15);
  if ( v13 )
    *(_QWORD *)(v13 + 8) = v11;
  else
    *((_QWORD *)this + 16) = v11;
  *((_QWORD *)this + 15) = v11;
LABEL_16:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v5;
}
