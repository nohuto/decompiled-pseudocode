/*
 * XREFs of sub_180078CFC @ 0x180078CFC
 * Callers:
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 * Callees:
 *     sub_18006ED60 @ 0x18006ED60 (sub_18006ED60.c)
 *     sub_1800D0CC0 @ 0x1800D0CC0 (sub_1800D0CC0.c)
 *     sub_1800D0D88 @ 0x1800D0D88 (sub_1800D0D88.c)
 *     sub_180115678 @ 0x180115678 (sub_180115678.c)
 */

__int64 __fastcall sub_180078CFC(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 **v5; // rbx
  __int64 v6; // rdi
  __int64 **v7; // rbx
  __int64 **v8; // rbx
  __int64 **v9; // rbx
  __int64 **v10; // rbx
  __int64 **v11; // rbx
  __int64 **v12; // rbx
  __int64 **v13; // rbx
  __int64 **v14; // rbx
  __int64 **v15; // rbx
  __int64 **v16; // rbx
  __int64 **v17; // rbx
  __int64 **v18; // rbx

  result = sub_180115678(*(_QWORD *)(a1 + 464));
  if ( (_BYTE)result )
  {
    v4 = sub_1800D0D88(v3);
    v5 = *(__int64 ***)(a1 + 464);
    v6 = v4;
    sub_1800D0CC0(v4, 14LL, 0LL, 3LL);
    sub_18006ED60(
      v5,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2018LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Component_Instance_FrameCurrent");
    v7 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 7LL, 0LL, 3LL);
    sub_18006ED60(
      v7,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2019LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_ConstantBuffer_Instance_FrameCurrent");
    v8 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 6LL, 0LL, 3LL);
    sub_18006ED60(
      v8,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2020LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_IndexBuffer_Instance_FrameCurrent");
    v9 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 5LL, 0LL, 3LL);
    sub_18006ED60(
      v9,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2021LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_VertexBuffer_Instance_FrameCurrent");
    v10 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 1LL, 0LL, 3LL);
    sub_18006ED60(
      v10,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2022LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_VertexIndex_Instance_FrameCurrent");
    v11 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 10LL, 0LL, 3LL);
    sub_18006ED60(
      v11,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2023LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Material_Instance_FrameCurrent");
    v12 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 12LL, 0LL, 3LL);
    sub_18006ED60(
      v12,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2024LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Mesh_Instance_FrameCurrent");
    v13 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 8LL, 0LL, 3LL);
    sub_18006ED60(
      v13,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2025LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Shader_Instance_FrameCurrent");
    v14 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 13LL, 0LL, 3LL);
    sub_18006ED60(
      v14,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2026LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_SceneNode_Instance_FrameCurrent");
    v15 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 11LL, 0LL, 3LL);
    sub_18006ED60(
      v15,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2027LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Texture_Instance_FrameCurrent");
    v16 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 0LL, 0LL, 3LL);
    sub_18006ED60(
      v16,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2028LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_Vertex_Instance_FrameCurrent");
    v17 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 4LL, 0LL, 3LL);
    sub_18006ED60(
      v17,
      (__int64)"..\\Source\\Engine\\Engine.cpp",
      2029LL,
      (__int64)"LogInstanceCounts",
      (__int64)"Counter_RenderState_Instance_FrameCurrent");
    v18 = *(__int64 ***)(a1 + 464);
    sub_1800D0CC0(v6, 3LL, 0LL, 3LL);
    return sub_18006ED60(
             v18,
             (__int64)"..\\Source\\Engine\\Engine.cpp",
             2030LL,
             (__int64)"LogInstanceCounts",
             (__int64)"Counter_RenderTarget_Instance_FrameCurrent");
  }
  return result;
}
