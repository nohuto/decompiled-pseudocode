/*
 * XREFs of ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAIII@Z @ 0x180123B38
 * Callers:
 *     ?CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z @ 0x180123B04 (-CalculateDynamicObjectGrantCount@CStreamResource@Sarm@@QEBAII@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall Sarm::CStreamResource::CalculateDynamicObjectGrantCount(
        Sarm::CStreamResource *this,
        unsigned int a2,
        const GUID *a3)
{
  char v3; // r11
  unsigned __int64 v4; // r9
  bool v5; // cf
  unsigned int v6; // eax
  unsigned int v7; // edx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  char *v13; // [rsp+60h] [rbp-A0h]
  int v14; // [rsp+68h] [rbp-98h]
  int v15; // [rsp+6Ch] [rbp-94h]
  char *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  char *v19; // [rsp+80h] [rbp-80h]
  int v20; // [rsp+88h] [rbp-78h]
  int v21; // [rsp+8Ch] [rbp-74h]
  char *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  char *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  int *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  int *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  char *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  int *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]
  unsigned int v43; // [rsp+128h] [rbp+28h] BYREF
  int v44; // [rsp+130h] [rbp+30h] BYREF

  v44 = (int)a3;
  v3 = *((_BYTE *)this + 88);
  v4 = 0LL;
  v5 = a2 < *((_DWORD *)this + 17);
  v10 = 0;
  if ( !v5 )
    a2 = *((_DWORD *)this + 17);
  v43 = a2;
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 20);
    if ( a2 < v6 )
    {
      if ( *((_DWORD *)this + 18) >= *((_DWORD *)this + 16) )
        v4 = a2;
      v10 = v4;
    }
    else
    {
      v7 = a2 - v6;
      if ( v7 < (unsigned int)a3 )
        a3 = (const GUID *)v7;
      if ( v6 + (unsigned int)a3 >= *((_DWORD *)this + 16) )
      {
        v4 = v6 + (unsigned int)a3;
        v10 = v6 + (_DWORD)a3;
      }
    }
  }
  if ( (unsigned int)dword_1801B5350 > 5 )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v42 = 0;
    v13 = (char *)this + 40;
    v16 = (char *)this + 16;
    v19 = (char *)this + 80;
    v22 = (char *)this + 64;
    v28 = (int *)&v43;
    v31 = &v44;
    v34 = (int *)&v10;
    v37 = &v9;
    v11 = *((_DWORD *)this + 13);
    v40 = &v11;
    v14 = 8;
    v17 = 16;
    v20 = 4;
    v23 = 4;
    v25 = (char *)this + 68;
    v26 = 4;
    v29 = 4;
    v32 = 4;
    v35 = 4;
    v9 = v3;
    v38 = 1;
    v41 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B5350, &unk_180179A76, a3, (LPCGUID)v4, 0xCu, &pData);
    LODWORD(v4) = v10;
  }
  return (unsigned int)v4;
}
