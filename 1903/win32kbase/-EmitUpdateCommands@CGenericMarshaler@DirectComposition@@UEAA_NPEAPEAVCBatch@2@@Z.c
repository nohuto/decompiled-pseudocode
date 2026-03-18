/*
 * XREFs of ?EmitUpdateCommands@CGenericMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AFEB0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b49___ @ 0x1C01AFC38 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b4.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918d___ @ 0x1C01AFCB4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36f___ @ 0x1C01AFD20 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___ @ 0x1C01AFD94 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4f___ @ 0x1C01AFE10 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4.c)
 */

char __fastcall DirectComposition::CGenericMarshaler::EmitUpdateCommands(
        DirectComposition::CGenericMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD **v2; // rbx
  _DWORD **v5; // r14
  _DWORD *v6; // rdx
  _BYTE *v7; // rsi
  char v8; // r8
  char updated; // al
  _DWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD **)*((_QWORD *)this + 6);
  v5 = &v2[*((_QWORD *)this + 7)];
  while ( v2 != v5 )
  {
    v6 = *v2;
    v7 = (char *)*v2 + 5;
    if ( !*v7 )
      goto LABEL_24;
    v8 = *((_BYTE *)v6 + 4);
    if ( !v8 )
    {
      v11 = *v2;
      updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_12e75180a11ffed6cad26bb14cc56b49___(
                  (__int64)this,
                  a2,
                  &v11);
      goto LABEL_22;
    }
    switch ( *((_BYTE *)v6 + 4) )
    {
      case 1:
        if ( v8 != 1 )
          v6 = 0LL;
        v11 = v6;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8cac5da16f0742029578aa2516c8918d___(
                    (__int64)this,
                    a2,
                    (__int64)&v11);
LABEL_22:
        if ( !updated )
          return 0;
        break;
      case 2:
        if ( v8 != 2 )
          v6 = 0LL;
        v11 = v6;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cd6f464a9ec2345488c4c067fc53b36f___(
                    (__int64)this,
                    a2,
                    &v11);
        goto LABEL_22;
      case 3:
        if ( v8 != 3 )
          v6 = 0LL;
        v11 = v6;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_cf52b1175f102f66240ee89a888274f8___(
                    (__int64)this,
                    a2,
                    &v11);
        goto LABEL_22;
      case 4:
        if ( v8 != 4 )
          v6 = 0LL;
        v11 = v6;
        updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_fb4397cd017524576289882ab3881e4f___(
                    (__int64)this,
                    a2,
                    (__int64)&v11);
        goto LABEL_22;
    }
    *v7 = 0;
LABEL_24:
    ++v2;
  }
  return 1;
}
